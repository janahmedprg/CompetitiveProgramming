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
        vector<pair<ll,ll>> v;
        ll maxH = 0;
        ll maxDMG = k;
        for(int i = 0;i<n;++i){
            ll a;
            cin>>a;
            if(a>maxH){
                maxH = a;
            }
            v.push_back({0,a});
        }
        for(int i = 0; i<n;++i){
            ll a;
            cin >> a;
            v[i].first=a;
        }
        sort(v.begin(),v.end());
        for(int i = 0; i<n;++i){
            while(v[i].second - maxDMG>0){
                k-=v[i].first;
                if(k<= 0){
                    break;
                }
                maxDMG += k;
            }
            if(maxDMG>=maxH){
                break;
            }
        }
        if(maxDMG<maxH){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

    }
    return 0;
}