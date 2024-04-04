#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> b(n);
        vector<ll> c(m);
        for(int i = 0; i< n; ++i){
            cin>>b[i];
        }
        for(int i = 0; i<m;++i){
            cin>>c[i];
        }
        ll count = 0;
        for(int i = 0; i< n; ++i){
            for(int j = 0; j<m; ++j){
                if(b[i] + c[j] <= k){
                    count += 1; 
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}