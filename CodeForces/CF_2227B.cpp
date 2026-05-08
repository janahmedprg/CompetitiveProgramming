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
        string s;
        cin>>n>>s;

        int open = 0;
        int close = 0;
        for (int i = 0; i<n; ++i) {
            if (s[i] == '(') {
                open++;
            }
            else {
                close ++;
            }
        }
        cout<< (open == close ? "YES" : "NO") << "\n";
        
    }
    return 0;
}