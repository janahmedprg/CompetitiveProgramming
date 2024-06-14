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
        int n;
        cin >> n;
        map<string, int> m;
        vector<string> v;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);
            m[s] = 1;
        }
        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            flag = true;
            int l = v[i].size();
            for (int j = 1; j < l; ++j)
            {
                if (m.count(v[i].substr(0, j)) != 0 && m.count(v[i].substr(j, l - j)) != 0)
                {
                    cout << 1;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << 0;
            }
        }
        cout << "\n";
    }
    return 0;
}