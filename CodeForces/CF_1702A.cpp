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
        long long n;
        cin >> n;
        long long a = 1;
        for (long long i = 0; i < 13; ++i)
        {
            a *= 10;
            if (n / a == 0)
            {
                a /= 10;
                break;
            }
        }
        cout << n - a << "\n";
    }
    return 0;
}