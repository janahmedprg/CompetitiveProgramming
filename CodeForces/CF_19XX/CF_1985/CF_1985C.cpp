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
        ll n;
        cin>>n;
        vector<ll> p(n);
        map<ll,ll> m;
        cin>>p[0];
        m[p[0]] = 0;
        for (ll i = 1; i<n; ++i){
            ll tmp;
            cin>>tmp;
            p[i] = p[i-1] + tmp;
            if (m.count(tmp) == 0){
                m[tmp] = i;
            }
        }
        ll c = 0;
        for (ll i = 0; i<n; ++i){
            if (p[i]%2 == 0){
                if (m.count(p[i]/2) == 1 && m[p[i]/2] <= i){
                    c += 1;
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}