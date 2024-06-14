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
        map<ll,ll> m;
        bool flag = true;
        ll odds = 0;
        ll evens = 0;
        for(ll i = 0;i<n;++i){
            ll a;
            cin>>a;
            if(a % 2 == 1){
                odds += 1;
            }
            else{
                evens += 1;
            }
            if(m.count(a) == 1){
                flag = false; 
                break;
            }
            m[a] = 1;
        }
        if((odds >= 2 && evens >= 2)){
            flag = false;
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}