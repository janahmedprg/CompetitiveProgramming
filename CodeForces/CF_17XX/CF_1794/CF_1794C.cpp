#include <bits/stdc++.h>
#define int long long int

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
        vector<int> v(n+1);
        int l = 1;
        int r = 1;
        for(int i = 1; i<=n; ++i){
            cin>>v[i];
            while(l<=i && v[l]<r){
                l+=1;
                r-=1;
            }
            r+=1;
            cout<<i - l + 1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}