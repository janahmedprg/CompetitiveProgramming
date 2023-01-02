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
        vector<ll> v;
        ll steps = 10000000;
        for(ll i = 0; i<n;++i){
            ll a;
            cin >> a;
            if(a%2==1){
                v.push_back(a); 
            }
            else{
                ll c =0;
                while(a!=0 && a%2 == 0){
                    c +=1;
                    a=a/2;
                }
                if(c<steps){
                    steps =c;
                }
            }
        }
        if(v.size()%2==0){
            cout<<0<<"\n";
        }
        else{
            ll k = v.size();
            ll mi = 10000000;
            for(ll i = 0; i<k; ++i){
                ll count = 0;
                while(v[i]!=0 && v[i]%2 == 1){
                    count +=1;
                    v[i]=v[i]/2;
                }
                if(count < mi){
                    mi = count;
                }
            }
            if(steps > mi ){
                cout<<mi<<"\n";
            }
            else{
                cout<< steps<<"\n";
            }
        }
    }
    return 0;
}