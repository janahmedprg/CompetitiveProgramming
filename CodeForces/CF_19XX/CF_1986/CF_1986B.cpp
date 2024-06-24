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
        vector<vector<int>> v(n, vector<int>(m));
        vector<pair<int, int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
        for(int i = 0; i<n;++i){
            for (int j = 0; j<m;++j){
                cin>>v[i][j];
            }
        }
        for(int i = 0; i<n; ++i){
            for (int j = 0; j<m;++j){
                vector<int> tmp;
                for (auto di : d){
                    int x = i+di.first;
                    int y = j+di.second;
                    if(x>=0 && x<n && y>=0 && y<m){
                        tmp.push_back(v[x][y]);
                    }
                }
                sort(tmp.rbegin(), tmp.rend());
                if(v[i][j] > tmp[0]){
                    v[i][j] = tmp[0];
                }
            }
        }
        for(auto x:v){
            for (auto y:x){
                cout<<y<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}