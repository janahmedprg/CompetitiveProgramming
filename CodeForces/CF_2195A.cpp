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
        int c = 0;
        int c1 = 0;
        for (int i = 0; i < n; ++i){
            int x;
            cin>>x;
            if (x == 67) {
                c += 1;
            }
        }  
        if (c > 0) {
            cout<< "YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}