#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<pair<int,vector<int>>> v;
int n,m;

bool checker(int a, int b){
    map<int,int> tmp;
    for(a;a<=b;++a){
        for(int i = 0; i<v[a].second.size();++i){
            tmp[v[a].second[i]] = 1;
        }
        if(tmp.size() == m){
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        cin>>n>>m;
        v.clear();
        v.resize(n);
        map<int,int> f;
        for(int i = 0; i<n; ++i){
            cin>>v[i].first;
            vector<int> tmp;
            for (int j=1; j<=(int)sqrt(v[i].first)+1; ++j){
                if (v[i].first%j == 0){
                    if (v[i].first/j == j){
                        if(j<=m){
                            f[j] =1;
                            tmp.push_back(j);
                        }
                    }
                    else{
                        if(j<=m){
                            f[j] = 1;
                            tmp.push_back(j);
                        }
                        if(v[i].first/j<=m){
                            tmp.push_back(v[i].first/j);
                            f[v[i].first/j] = 1;
                        }
                    }
                }
            }
            v[i].second = tmp;
        }
        if(f.size() != m){
            cout<<-1<<"\n";
            continue;
        }
        sort(v.begin(),v.end());  
        if(m==1 || n==1){
            cout<<0<<"\n";
            continue;
        }
        int L = 0;
        int R = n/2;
        while(L<R){
            int mid = L+(R-L)/2;
            if(L == mid){
                if(checker(mid+1,n-1)){
                    L = mid +1;
                }
                break;
            }
            if(checker(mid,n-1)){
                L = mid;
            }
            else{
                R = mid;
            }
        }
        int l = L;
        R = n-1;
        while (l < R)
        {
            int mid = l + (R - l) / 2;
            if(l==mid){
                if(checker(L,R-1)){
                    R = R-1;
                }
                break;
            }
            if (checker(L, mid))
            {
                R = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout<<v[R].first-v[L].first<<"\n";
    }
    return 0;
}