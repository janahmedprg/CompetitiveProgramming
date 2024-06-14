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
        n=n*(n-1)/2;
        map<ll,ll> m;
        for(int i = 0; i<n; ++i){
            ll a;
            cin>>a;
            m[a] += 1;
        }
        vector<pair<ll,ll>> v;
        for(auto x:m){
            v.push_back({x.first, x.second});
        }
        sort(v.rbegin(),v.rend());
        int c = 1;
        int k = v.size();
        cout<<v[0].first<<" ";
        for(int i = 0; i<k; ++i){
            int x = ((-2*c+1)+sqrt((2*c-1)*(2*c-1)+8*v[i].second))/2;
            for (int j = 0; j<x;++j){
                cout<<v[i].first<<" ";
            }
            c+=x;
        }
        cout<<"\n";
    }
    return 0;
}