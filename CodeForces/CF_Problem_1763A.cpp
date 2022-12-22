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
        ll a;
        cin >> a;
        ll b =a;
        for(int i = 1; i<n; ++i){
            ll x;
            cin >>x;
            a = a & x;
            b = b | x;
        }
        cout<<b-a<<"\n";
    }
    return 0;
}