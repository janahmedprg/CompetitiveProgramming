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
        int n,m,l;
        cin>>n>>m>>l;
        int x = 0;
        int prev = 0;

        for (int i = 0; i< n; ++i){
            int bins = min(m, n-i+1);
            int flash;
            cin>>flash;
            if (bins != 1){
                x += (flash - prev) / bins;
            }
            prev = flash;
        }
        x += l-prev;
        cout<<x<<"\n";
    }
    return 0;
}