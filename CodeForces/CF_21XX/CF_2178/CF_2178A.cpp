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
        string s;
        cin >> s;
        int count = 0;
        for (char c : s) {
            if (c == 'Y') {
                count++;
            }
        }
        if (count >= 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}