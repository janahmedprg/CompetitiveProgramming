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
        vector<ll> v(n);
        for (ll i = 0; i<n; ++i){
            cin>>v[i];
        }
        if (v[0] != v[n-1]){
            cout<<"YES\n";
            if(v[0] == v[1]){
                cout<<"R";
                for (ll i = 1; i<n; ++i){
                    cout<<"B";
                }
                cout<<"\n";
            }
            else{
                for (ll i = 0; i<n-1; ++i){
                    cout<<"B";
                }
                cout<<"R\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}