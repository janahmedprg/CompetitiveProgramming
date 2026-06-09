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

        sort(v.begin(), v.end(), greater<int>());
        bool flag = true;

        for (size_t i = 2; i < n; i++) {
            if (v[i-2] % v[i-1] != v[i]) {
                cout << "-1\n";
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << v[0] << " " << v[1] << "\n";
        }
    }
    return 0;
}