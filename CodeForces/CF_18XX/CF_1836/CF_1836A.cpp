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
        ll ma = 0;
        for(int i = 0; i<n;++i){
            ll a;
            cin>>a;
            m[a]+=1;
            if(a>ma){
                ma =a;
            }
        }
        bool flag = true;
        if(m[0] == 0){
            cout<<"NO\n";
            continue;
        }
        for(int i = 1; i<=ma;++i){
            if(m[i]>m[i-1]){
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
    }
    return 0;
}