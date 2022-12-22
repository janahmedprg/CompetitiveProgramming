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
        vector<ll> v;
        ll a;
        cin >> a;
        v.push_back(a);
        bool flag = false;
        for(ll i = 1; i< n; ++i){
            ll x;
            cin >> x;
            if(a>x){
                flag = true;
            }
            v.push_back(x);
            a = x;
        } 
        if(flag){
            bool fl = false;
            bool fl2 = false;
            ll y = v[0];
            ll count = 0;
            for(int i = 1; i<n;++i){
                if(v[i]>y){
                    fl = true;
                }
                if(v[i]<y){
                    fl = false;
                }
                if(fl != fl2){
                    count +=1;
                    fl2 = fl;
                } 
                y = v[i];
            } 
            if(count>1){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
            
        }
        else{ 
            cout<<"YES\n";
        }
    }
    return 0;
}