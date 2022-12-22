#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll ma = 0;
        ll mi = 100000000;
        for (ll i = 0; i < n; ++i)
        {
            ll a;
            cin >> a;
            if (a < mi)
            {
                mi = a;
            }
            if (a > ma)
            {
                ma = a;
            }
            v.push_back(a);
        }
        if (mi == ma)
        {
            cout << n * (n - 1) << "\n";
        }
        else
        {
            ll cmi = 0;
            ll cma = 0;
            for (ll i = 0; i < n; ++i)
            {
                if (ma == v[i])
                {
                    cma += 1;
                }
                if (mi == v[i])
                {
                    cmi += 1;
                }
            }
            cout << cmi * cma * 2 << "\n";
        }
    }
    return 0;
}