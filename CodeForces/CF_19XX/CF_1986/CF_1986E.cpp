#include <bits/stdc++.h>
#define int long long int

using namespace std;
using ll = long long;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i<n;++i){
            cin>>v[i];
        }
        map<int,vector<int>> m;
        if(n == 1){
            cout<<0<<"\n";
            continue;
        }
        for (int i = 0; i<n; ++i){
            m[v[i]%k].push_back(v[i]);
        }
        int c = 0;
        if(n%2 == 1){
            int odds = 0;
            for(auto x: m){
                if(x.second.size() % 2 == 1){
                    odds += 1;
                    if(x.second.size() == 1){
                        continue;
                    }
                    sort(x.second.begin(), x.second.end()); 
                    vector<int> diff;
                    vector<int> used(x.second.size(), 0);
                    for(int i = 0; i<x.second.size()-1; ++i){
                        diff.push_back(x.second[i+1]-x.second[i]);
                    }
                    int mi = 1000000001;
                    int tmp = 0;
                    for(int i = 0; i<x.second.size()-1; i+=2){
                        tmp += diff[i]/k;
                    }
                    mi = min(tmp,mi);
                    tmp = 0;
                    for(int i = 1; i<x.second.size()-1; i+=2){
                        tmp += diff[i]/k;
                    }
                    mi = min(tmp,mi);
                    int l = 0;
                    int r = diff.size()-1;
                    if(n>=5){
                        int precomp = diff[0]/k;
                        for(int i = 3; i<diff.size();i+=2){
                            precomp += diff[i]/k;
                        }
                        mi = min(precomp,mi);
                        for(int i=3; i<diff.size()-1;i+=2){
                            precomp+=diff[i-1]/k-diff[i]/k;
                            mi = min(precomp,mi);
                        }
                    }
                    c+=mi;
                }
                else{
                    sort(x.second.begin(), x.second.end());
                    for(int i = 0; i<x.second.size(); i+= 2){
                        c+=(x.second[i+1] - x.second[i])/k;
                    }
                }
            }
            if (odds == 1){
                cout<<c<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
        else{
            int odds = 0;
            for(auto x: m){
                if(x.second.size() % 2 == 1){
                    odds += 1;
                }
                else{
                    sort(x.second.begin(), x.second.end());
                    for(int i = 0; i<x.second.size(); i+= 2){
                        c+=(x.second[i+1] - x.second[i])/k;
                    }
                }
            }
            if (odds == 0){
                cout<<c<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }
    return 0;
}