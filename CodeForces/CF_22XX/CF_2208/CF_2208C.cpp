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
        cin>>n;

        vector<double> c(n);
        vector<double> p(n);

        for (int i =0; i< n; ++i) {
            cin>>c[i];
            cin>>p[i];
        }
        
        double ret = 0;
        for (int i = n-1; i>=0; --i) {
            ret = max(ret, (1 - p[i]/100) * ret + c[i]);
        }

        cout<<setprecision(10)<<ret<<"\n";
    }
    return 0;
}