#include <bits/stdc++.h>
#define int long long int

using namespace std;
using ll = long long;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin>>n;
        vector<int> v(n);
        vector<pair<int,int>> lr(n);
        ll cones = 0;
        ll czeroes = 0;
        int ma = 0;
        for (int i = 0; i<n; ++i){
            cin>>v[i];
            lr[i].first = cones;
            if (v[i] == 1){
                cones += 1;
            }
            if (v[i] == 0){
                czeroes += 1;
                ma += cones;
            }
        }
        int lzeros = 0;
        for (int i = 0; i<n; ++i){
            if(v[i] == 0){
                lzeros += 1;
            }
            lr[i].second = czeroes - lzeros;
        }
        int best = ma;
        for (int i = 0; i<n; ++i){
            int tmp;
            if (v[i] == 0){
                tmp = lr[i].second - lr[i].first + ma;
            }
            else{
                tmp = lr[i].first - lr[i].second + ma;
            }
            if (tmp > best){
                best = tmp;
            }
        }
        cout<<best<<"\n";
    }
    return 0;
}