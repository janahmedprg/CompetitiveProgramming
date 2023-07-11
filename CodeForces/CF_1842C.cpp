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
        map<ll,vector<ll>> m;
        ll a;
        for (ll i = 1; i<=n; ++i){
            cin>>a;
            m[a].push_back(i);
        }
        
        vector<pair<ll,ll>> v;
        for(auto x:m){
            if(x.second.size()>= 2){
                v.push_back({x.second[0],x.second[x.second.size()-1]});
            }
        }
        if(v.size()==0){
            cout<<0<<"\n";
            continue;
        }
        sort(v.begin(),v.end());
        ll count = v[0].second-v[0].first+1; 
        int cm = v[0].second;
        ll pcount = count;
        for(int i = 0;i<v.size()-1;++i){
            if(cm < v[i+1].first){
                cm = v[i+1].second;
                count += v[i+1].second-v[i+1].first+1;
                pcount = v[i+1].second-v[i+1].first+1;
            }
            else if(cm== v[i+1].first){
                cm = v[i+1].second;
                count += v[i+1].second-v[i+1].first;
                pcount = v[i+1].second-v[i+1].first;
            }
            else{
                if(pcount < v[i+1].second - v[i+1].first+1){
                    cm = v[i+1].second;
                    count -= pcount;
                    count +=v[i+1].second - v[i+1].first +1; 
                    pcount = v[i+1].second - v[i+1].first +1;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}