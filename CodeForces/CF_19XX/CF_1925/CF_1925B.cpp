#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll divisors(ll n,ll d) { 
    ll res = -1;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if(i<=n/d){
                res = max((ll)i,res);
            }
            if( n/i <= n/d){
                res = max((ll)(n/i),res);
            }
        }
    }
    return res;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll x, n;
        cin>>x>>n;
        ll res = divisors(x,n); 
        res = (n==1)?x:res;
        cout<<res<<"\n";
    }
    return 0;
}