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
        ll n,m;
        cin>>n>>m;
        m -=1;
        vector<ll> v;
        vector<ll> ps;
        ll sum = 0;
        priority_queue<pair<ll,ll>> pq;
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pqm;
        for(ll i = 0; i< n;++i){
            ll a;
            cin>>a;
            sum+=a;
            v.push_back(a);
            ps.push_back(sum);
            pq.push({a,i});
            pqm.push({a,i});
        }
        ll c = 0;
        ll dif = 0;
        for(ll i = 0;i<m;++i){
            while(ps[i]-ps[m]<0){
                if(pq.top().second<=i || pq.top().second>m){
                    pq.pop();
                    continue;
                }
                c+=1;
                dif += 2*pq.top().first;
                for(ll j = pq.top().second; j<=m;++j){
                    ps[j] -= 2*pq.top().first;
                }
                pq.pop();
            }
        } 
        for(ll i = m+1;i<n;++i){
            while((ps[i]-dif)-ps[m]<0){
                cout<<pqm.top().first<<endl;
                if(pqm.top().second>i || pqm.top().second<m){
                    pqm.pop();
                    continue;
                }
                c+=1;
                dif += 2*pqm.top().first;
                for(ll j = pqm.top().second; j<=i;++j){
                    ps[j] -= 2*pqm.top().first;
                }
                pqm.pop();
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}