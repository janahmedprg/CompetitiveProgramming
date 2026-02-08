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
        int n,m;
        cin>>n>>m;
        string s; 
        vector<vector<int>> omat(n,vector<int>(m));
        vector<vector<int>> vmat(n,vector<int>(m));
        for(int i = 0; i<n;++i){
            cin>>s;
            for(int j = 0; j<m;++j){
                omat[i][j] = s[j];
            }
        }
        for(int i = 0; i<n;++i){
            cin>>s;
            for(int j = 0; j<m;++j){
                vmat[i][j] = s[j];
            }
        }
        bool flag = false;
        for(int i = 0; i<n;++i){
            int orow = 0;
            int vrow = 0;
            for (int j = 0; j<m; ++j){
                orow += omat[i][j];
                orow %= 3;
                vrow += vmat[i][j];
                vrow %= 3;
            }
            if (orow != vrow){
                flag = true;
            }
        }
        for(int j = 0; j<m;++j){
            int orow = 0;
            int vrow = 0;
            for (int i = 0; i<n; ++i){
                orow += omat[i][j];
                orow %= 3;
                vrow += vmat[i][j];
                vrow %= 3;
            }
            if (orow != vrow){
                flag = true;
            }
        }
        if (flag){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}