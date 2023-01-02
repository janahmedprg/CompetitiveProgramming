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
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        vector<ll> u(m);
        for(ll i = 0; i<n; ++i){
            cin>>v[i];
        }
        for(ll i = 0; i<m; ++i){
            cin>>u[i];
        }
        sort(v.begin(),v.end());
        ll j = 0;
        while(j < m){
            sort(v.begin(),v.end());
            v[0] = u[j];
            j+=1;
        }
        ll c=0;
        for(ll i = 0;i<n;++i){
            c += v[i];
        }
        cout<<c<<"\n";
    }
    return 0;
}