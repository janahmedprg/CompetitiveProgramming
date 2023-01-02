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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < m - 1; ++i)
        {
            if (a[n - i - 1] != b[m - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            flag = false;
            for (int i = 0; i < n - m + 1; ++i)
            {
                if (b[0] == a[i])
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
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
    return 0;
}