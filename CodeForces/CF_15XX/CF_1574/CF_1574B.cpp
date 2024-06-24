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
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        vector<int> v = {a,b,c};
        sort(v.begin(), v.end());
        int ma = a+b+c-3;
        int mi = v[2]-1 - v[0] -v[1];
        if(m>=mi && m<=ma){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}