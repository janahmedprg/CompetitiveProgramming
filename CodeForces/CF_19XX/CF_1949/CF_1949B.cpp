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
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> u(n);
        for (int i = 0; i<n; ++i){
            cin>>v[i];
        }
        for(int i = 0; i<n; ++i){
            cin>>u[i];
        }
        sort(v.begin(), v.end());
        sort(u.begin(), u.end());
        int re = 0;
        for (int i = 0; i< n; ++i){
            int mi = 1000000001;
            for (int j = 0; j<n; ++j){
                if(j<=i){
                    mi = min(mi,abs(v[j] - u[j+n-i-1]));
                }
                else{
                    mi = min(mi, abs(v[j] - u[j-i-1]));
                }
            }
            re = max(re, mi);
        }
        cout<<re<<"\n";
    }
    return 0;
}