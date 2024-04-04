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
        for (int i = 0; i<n; ++i){
            cin>>v[i];
        }
        bool flag = false;
        for(int i = 0; i<n; ++i){
            if(v[i] > 0 && i < n-2){ 
                v[i+1] -= 2*(v[i]);
                v[i+2] -= v[i];
                if(v[i+1] < 0 || v[i+2] <0){
                    flag = true;
                }
                v[i] -= v[i];
            }
        }
        if(flag || v[n-1]!= 0 || v[n-2] != 0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}