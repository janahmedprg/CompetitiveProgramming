#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<ll> vec(n); for (ll i = 0; i < n; ++i) cin >> vec[i];

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
        ll n;
        cin >> n;

        read_vector(v, n);

        ll ans = 0;

        vector<ll> negatives(n);
        vector<ll> precomp(n);

        negatives[n-1] = 0;

        int c = 0;

        for (ll i = 0; i < n-1; ++i) { 
            if (i == 0){
                precomp[i] = v[i];
            }    
            else {
                precomp[i] = precomp[i-1] + abs(v[i]);
            }
            negatives[n - i -2] = negatives[n-i-1] - v[n-i-1];
        }

        ans = negatives[0];
        for (ll i = 1; i < n; ++i) {
            ans = max(ans, negatives[i] + precomp[i-1]);
        }

        cout<<ans<<"\n";
    }
    return 0;
}