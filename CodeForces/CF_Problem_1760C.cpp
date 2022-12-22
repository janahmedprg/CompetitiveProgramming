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
        cin >> n;
        ll m = 0;
        vector<ll> v;
        ll h = 0;
        for(ll i = 0; i<n; ++i){
            ll a;
            cin >> a;
            v.push_back(a);
            if (a>m){
                h = m;
                m = a;   
            }
            else{
                if (a>h){
                    h = a;
                }
            }
        }
        for(ll i = 0; i<n; ++i){
            if (v[i] == m){
                if(h == 0){
                    cout<< 0 <<" ";
                }
                else{
                    cout<< v[i] - h << " ";
                }
            }
            else{
                cout<< v[i]-m<<" ";
            }
        }
        cout<< "\n";
    }
    return 0;
}