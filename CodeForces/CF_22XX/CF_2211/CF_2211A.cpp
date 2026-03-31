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
        int x;
        if (n == 1) {
            cin>>x;    
            cout<<"1\n";
            continue;
        }
        for (int i = 0; i < n; ++i) {
            cin>>x;
            cout<<2<<" ";
        }
        cout<<"\n";
    }
    return 0;
}