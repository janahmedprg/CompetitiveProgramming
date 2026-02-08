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
       int n,m,k;
       cin>>n>>m>>k;
       int i = 0;
       int j = m-1;
       while(m-j<=m){
        if (n-i == m){
            cout<<m-j<<" ";
            j-=1;
        }
        else{
            cout<<n-i<<" ";
            i+=1;
        }
       }
       cout<<"\n";
    }
    return 0;
}