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
        int n, k;
        cin>>n>>k;
        read_vector(a, n);
        read_vector(b, n);
        vector<int> a_freq(n+1, 0);
        vector<int> b_freq(n+1, 0);

        int count = 0;
        for (int i = 0; i < k; ++i) {
            if (b[i] == -1) {
                count += 1;
            }
        }
        
    }
    return 0;
}