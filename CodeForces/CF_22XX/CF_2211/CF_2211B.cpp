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
        int x,y;
        cin>>x>>y;
        int kmax = max(x,y);
        int kmin = min(x,y);
        int k = kmax - kmin;
        int c = 0;
        for (int i = 1; i * i <= k; i++) {
            if (k % i == 0) {
                c += 1; 
                if (k/i != i) {
                    c += 1;
                }
            }
            c %= 676767677;
        }
        if (c == 0) {
            c = 1;
        }
        cout<<c<<"\n";
        for (int i = 0; i<x; ++i){
            cout<<1<<" ";
        }
        for (int i = 0; i<y; ++i){
            cout<<-1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}