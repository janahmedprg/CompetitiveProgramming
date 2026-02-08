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
        int n,k;
        cin>>n>>k;
        read_vector(cake, k);
        int ma = 0;
        int su = 0;
        for(int i = 0; i<k; ++i){
            su += 2*cake[i] - 1;
            if(ma<cake[i]){
                ma = cake[i];
            }
        }
        cout<<su-2*ma+1<<"\n";
    }
    return 0;
}