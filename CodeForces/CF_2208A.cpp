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
        int n;        
        cin >> n;
        map<int, int> m;
        int ma = -1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >>x;
                m[x] += 1;
                ma = max(ma, m[x]);
            }
        }

        if (ma > n * n - n) {
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }
    }
    return 0;
}