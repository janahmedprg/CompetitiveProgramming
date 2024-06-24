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
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(max(a,b),c) - min(min(a,b),c)<<"\n";
    }
    return 0;
}