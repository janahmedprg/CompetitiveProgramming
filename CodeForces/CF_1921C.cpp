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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        ll curr = 0;
        for (int i = 0; i<n; ++i){
            ll x;
            cin>>x;
            if((x-curr)*a<=b){
                f-=(x-curr)*a;
            }
            else{
                f-= b;
            } 
            curr = x;
        }
        if(f<=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}