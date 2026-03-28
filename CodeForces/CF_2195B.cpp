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
        read_vector(v, n);
        bool flag = true;
        vector<int> swap_set(n, -1);

        for (int i = 1; i <= n; ++i) {
            if (swap_set[i-1] == -1) {
                for (int j = i; j <= n; j *= 2) {
                    swap_set[j-1] = i;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            if (v[i] % swap_set[i] != 0) {
                flag = false;
            }
        }

        if (flag) {
            cout<< "YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}