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

        int a,b,c,m;
        cin>>a>>b>>c>>m;
        int lcm_ab = lcm(a,b);
        int lcm_ac = lcm(a,c);
        int lcm_bc = lcm(b,c);

        int a_ret = 6*(m/a) - 3*(m/lcm_ab) - 3*(m/lcm_ac) + 2*(m/lcm(lcm_ab,lcm_ac));
        int b_ret = 6*(m/b) - 3*(m/lcm_ab) - 3*(m/lcm_bc) + 2*(m/lcm(lcm_ab,lcm_bc));
        int c_ret = 6*(m/c) - 3*(m/lcm_bc) - 3*(m/lcm_ac) + 2*(m/lcm(lcm_bc,lcm_ac));
        
        cout<<a_ret<<" "<<b_ret<<" "<<c_ret<<"\n";
    }
    return 0;
}