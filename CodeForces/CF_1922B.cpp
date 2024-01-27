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
        for(int i =0;i<n; ++i){
            ll tmp;
            cin>>tmp;
            m[tmp]+=1;
        }
        ll totalC = 0;
        vector<pair<ll,ll>> v;
        for(auto x: m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end());
        ll ret = 0;
        for(int i = 0; i<v.size();++i){
            ll tmp3 = (v[i].second-2)*(v[i].second-1)*v[i].second;
            if (tmp3/6 >0){
                ret += tmp3/6;
            }
            ll tmp2 = (0.5 * (v[i].second - 1)*v[i].second) * totalC;
            if(tmp2>0){
                ret += tmp2;
            }
            totalC += v[i].second;
        }
        cout<<ret<<"\n";
    }
    return 0;
}