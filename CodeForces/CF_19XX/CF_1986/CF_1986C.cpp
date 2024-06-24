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
        int n,m;
        cin>>n>>m;
        string s, c;
        cin>>s;
        vector<int> v(m);
        for(int i = 0; i<m;++i){
            cin>>v[i];
            v[i] -= 1;
        }
        cin>>c;
        sort(v.begin(), v.end());
        sort(c.begin(), c.end());
        map<int,int> mapF;
        int j = 0;
        for(int i = 0; i<m; ++i){
            if(mapF.count(v[i]) == 0){
                s[v[i]] = c[j];
                j+=1;
            }
            mapF[v[i]] = 1;
        }
        cout<<s<<"\n";
    }
    return 0;
}