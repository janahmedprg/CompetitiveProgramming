#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll checker(vector<int> v, ll c){
    int k = v.size();
    v[0] = c;
    v[k-1] = c;
    map<int, int> m;
    ll idx = 0;
    ll ma = 0;
    ll sma = 0;
    for (int i = 0; i<k;++i){
        if (v[i] == c){
            m[i-idx] += 1;
            if (ma<i-idx){
                sma = ma;
                ma = i-idx;
            }
            idx = i+1;
        }
    }
    if(m[ma] == 1){
        return max((ma-1)/2,sma);
    }
    else{
        return ma;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> p;
        p.push_back(0);
        for (int i =0; i<n; ++i){
            int a;
            cin>>a;
            p.push_back(a-1);
        }
        p.push_back(0);
        int mi = k;
        for (int i = 0; i<k; ++i){
            int tmp = checker(p,i);
            if (tmp<mi){
                mi = tmp;
                cout<<i<<"\n";
            }
        }
        cout<<mi<<"\n";
    }
    return 0;
}