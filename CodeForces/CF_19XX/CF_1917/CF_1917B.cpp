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
        map<char, int> m;
        string s;
        int n;
        cin>>n;
        cin>>s;
        int c = 0;
        for(int i = 0; i<n;++i){
            m[s[i]] = 1;
            c += m.size();
        }
        cout<<c<<"\n";
    }
    return 0;
}