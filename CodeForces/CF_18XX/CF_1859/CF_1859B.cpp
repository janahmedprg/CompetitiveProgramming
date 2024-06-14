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
        int n;
        cin>>n;
        ll gm = 1000000001;
        ll gsm = 1000000001;
        ll su = 0;
        for(int i = 0; i<n; ++i){
            int m;
            cin>>m;
            ll lm;
            ll lsm;
            ll a;
            cin>>a;
            lm = a;
            lsm = a;
            cin>>a;
            if(lm>=a){
                lsm = lm;
                lm = a;
            }
            else{
                lsm = a;
            }
            for(int j = 2; j<m; ++j){
                cin>>a;
                if(lm>=a){
                    lsm = lm;
                    lm = a;
                }
                else if (lsm>a){
                    lsm = a;
                }
            }
            if(gm>=lm){
                gm = lm;
            }
            if(gsm >= lsm){
                gsm = lsm;
            }
            su += lsm;
        }
        cout<<su-gsm+gm<<"\n";

    }
    return 0;
}