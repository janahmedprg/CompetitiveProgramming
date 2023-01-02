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
        ll n,k;
        cin>>n>>k;
        ll sc = 0;
        vector<ll> v;
        for(int i = 1; i<=n;++i){
            ll a;
            cin>>a;
            v.push_back(a);
            if(i == k){
                sc = a;
            }
        }
        ll c = 0;
        for(int i = 0;i<n;++i){
            if(v[i]>=sc && v[i]>0){
                c+=1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}