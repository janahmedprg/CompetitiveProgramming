#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

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
        int n,c,k;
        cin>>n>>c>>k;
        read_vector(v,n);
        sort(v.begin(), v.end());
        for (int x : v) {
            int add;
            if (c-x < k) {
                k -= c-x;
                add = c-x;
            }
            else {
                add = k;
                k = 0;
            }
            if (x<=c) {
                c += x + add;
            }
        } 
        cout<<c<<"\n";
    }
    return 0;
}