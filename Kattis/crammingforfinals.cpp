#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r,c,d,n;
    ll ma = 10000;
    cin>>r>>c>>d>>n;
    unordered_map<string, long long> m;
    for (ll i = 0; i<n;++i){
        ll x, y;
        cin>>x>>y;
        x-=1;
        y-=1;
        string x_str = to_string(x);
        string y_str = to_string(y);
        string result = x_str + "," + y_str;
        m[result] = ma;
        for(ll j = 0; j<2*d+1; ++j){
            for(ll k = 0; k<2*d+1; ++k){
                ll x1 = x + j - d;
                ll y1 = x + k - d;
                if(x1<0 || x1>=r){
                    continue;
                }
                if(y1<0 || y1 >= c){
                    continue;
                }
                if((x-x1)*(x-x1) + (y-y1)*(y-y1)<=d*d){
                    string x_str1 = to_string(x1);
                    string y_str1 = to_string(y1);
                    string result1 = x_str1 + "," + y_str1;
                    m[result1] += 1;
                }
            }
        }
    }
    ll mi = 10000;
    if(r*c != m.size()){
        cout<<"0\n";
    }
    else{
        for(auto x : m){
            mi = min(mi, x.second);
        }
        cout<<mi<<"\n";
    }
    return 0;
}