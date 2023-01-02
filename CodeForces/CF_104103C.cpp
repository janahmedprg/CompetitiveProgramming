#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a;
    cin>>a;
    vector<ll> v;
    vector<ll> mods;
    ll c = 0;
    v.push_back(a);
    for(ll i = 0;i<n-1;++i){
        cin>>a;
        if((a+v[i])%k == 0){
            c+=1;
        }
        mods.push_back(a+v[i]);
        v.push_back(a);
    }
    if(c > n/2){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    
    return 0;
}