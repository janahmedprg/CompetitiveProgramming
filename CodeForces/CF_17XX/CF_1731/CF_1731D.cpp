#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n,m;
vector<vector<ll>> v;

bool checker(ll mid){
    vector<vector<ll>> w;
    w.assign(n,vector<ll>(m));
    ll val = mid*mid;
    for(ll i = 0; i<n;++i){
        for(ll j = 0;j<m;++j){
            if(v[i][j]<mid){
                w[i][j] = 0;
            }
            if(v[i][j]>=mid){
                w[i][j] = 1;
            }
        }
    }
    vector<vector<ll>> ps;
    ps.assign(n,vector<ll>(m));
    ps[0][0] = w[0][0];
    for (ll i = 1; i < m; ++i){
        ps[0][i] = ps[0][i - 1] + w[0][i];
    }
    for (ll i = 1; i < n; ++i){
        ps[i][0] = ps[i - 1][0] + w[i][0];
    }

    for (ll i = 1; i < n; ++i) {
        for (ll j = 1; j < m; ++j){
            ps[i][j] = ps[i - 1][j] + ps[i][j - 1] - ps[i - 1][j - 1] + w[i][j];
        }
    }
    for(int i = 0; i<n;++i){
        for(int  j = 0; j<m; ++j){
            if(j+mid-1>=m){
                continue;
            }
            if(i+mid-1>=n){
                continue;
            }
            ll a = ps[i+mid-1][j+mid-1];
            ll b,c,d;
            if(i == 0){
                b = 0;
            }
            else{
                b = ps[i-1][j+mid-1];
            }
            if(j == 0){
                c = 0;
            }
            else{
                c = ps[i+mid-1][j-1];
            }
            if(j == 0 || i == 0){
                d =0;
            }
            else{
                d = ps[i-1][j-1];
            }
            if(a-b-c+d == val){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        cin>>n>>m;
        v.assign(n,vector<ll>(m));
        for(ll i = 0;i<n;++i){
            for(ll j = 0;j<m;++j){
                cin>>v[i][j];
            }
        }
        ll mi = 1;
        ll ma = m;
        if(ma>n){
            ma = n;
        }
        while(ma-mi>0){
            ll mid = (ma+mi+1)/2;
            if (checker(mid)){
                mi = mid;
            }
            else {
                ma = mid;
                if(ma == mi+1){
                    break;
                }
            }
        }
        cout<<mi<<"\n";
    }
    return 0;
}