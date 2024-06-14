#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        long long n, k;
        cin >> n >> k;
        unordered_map<long long, vector<long long>> route;
        for (long long i = 0; i < n; ++i)
        {
            long long x;
            cin >> x;
            route[x].push_back(i);
        }
        for (int kk = 0; kk < k; ++kk)
        {
            long long a, b;
            cin >> a >> b;
            if (route.count(a) == 0 || route.count(b) == 0)
            {
                cout << "NO"
                     << "\n";
            }
            else if (route[a][0] <= route[b][route[b].size() - 1])
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}