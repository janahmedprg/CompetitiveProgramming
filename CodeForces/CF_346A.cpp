#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ma = 0;
    ll x;
    ll y;
    cin>>x>>y;
    if(x>ma){
        ma = x;
    }
    if(y>ma){
        ma = y;
    }
    ll g = gcd(x,y);
    for(ll i = 2; i<n;++i){
        ll a;
        cin>>a;
        if(ma<a){
            ma = a;
        }
        g = gcd(g,a);
    }
    if((ma/g-n)%2 == 0){
        cout<<"Bob\n";
    }
    else{
        cout<<"Alice\n";
    }
    return 0;
}