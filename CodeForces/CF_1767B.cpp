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
        ll first;
        cin>>first;
        for(int i = 1; i<n; ++i){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i<n-1; ++i){
            if(v[i]>first){
                first = (v[i]+first+1)/2;
            }
        }
        cout<<first<<"\n";
    }
    return 0;
}