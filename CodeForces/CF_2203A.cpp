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
        int n,m,d;
        cin>>n>>m>>d;
        int tower = d/m + 1;
        if (n%tower == 0){
            cout<< n/tower <<"\n";
        }
        else{
            cout<< n/tower + 1 <<"\n";
        }
        
    }
    return 0;
}