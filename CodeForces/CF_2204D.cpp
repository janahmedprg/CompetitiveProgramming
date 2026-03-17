#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

using namespace std;
using ll = long long;

pair<bool,pair<int,int>> dfs(int node, vector<int>& visited, vector<vector<int>>& A) {
    int color = visited[node];
    int opp = 1;
    if (color == 1){
        opp = 0;
    }
    bool flag = true;
    int total = 1;
    int colorOne = color;

    for (const auto& neighbor : A[node]) {
        if (visited[neighbor] == -1) {
            visited[neighbor] = opp;
            pair<bool,pair<int,int>> ret = dfs(neighbor, visited, A);
            flag = flag && ret.first;
            total += ret.second.first;
            colorOne += ret.second.second;
        }
        else {
            if (visited[neighbor] == color){
                flag = false;
            }
        }
    }
    return {flag,{total, colorOne}};
}


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
        vector<vector<int>> A(n);
        vector<int> visited(n,-1);

        for (int i = 0; i<m; ++i){
            int u,v;
            cin>>u>>v;
            u-=1;
            v-=1;
            A[u].push_back(v);
            A[v].push_back(u);
        }

        int count = 0;
        for (int i = 0; i<n; ++i){
            if (visited[i] == -1) {
                visited[i] = 1;
                pair<bool,pair<int,int>> ret = dfs(i, visited, A);
                if (ret.first){
                    count+=max(ret.second.second, ret.second.first-ret.second.second);
                }
            }
        }

        cout<<count<<"\n";
    }
    return 0;
}