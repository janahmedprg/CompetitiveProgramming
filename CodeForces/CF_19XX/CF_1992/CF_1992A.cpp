#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n)     \
    vector<int> vec(n);         \
    for (int i = 0; i < n; ++i) \
        cin >> vec[i];

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
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> ban = {a, b, c};
        for (int i = 0; i < 5; ++i)
        {
            int mi = min(ban[0], min(ban[1], ban[2]));
            for (int j = 0; j < 3; ++j)
            {
                if (ban[j] == mi)
                {
                    ban[j] += 1;
                    break;
                }
            }
        }
        cout << ban[0] * ban[1] * ban[2] << "\n";
    }
    return 0;
}