#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
{
    int n = heights.size();
    int m = heights[0].size();
    cout << n << endl;
    cout << m << endl;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> p(n, vector<int>(m));
    queue<pair<int, int>> qa;
    queue<pair<int, int>> qp;
    for (int i = 0; i < n; ++i)
    {
        qp.push({i, 0});
        qa.push({i, m - 1});
    }
    for (int i = 0; i < m; ++i)
    {
        qp.push({0, i});
        qa.push({n - 1, i});
    }

    while (qp.size() || qa.size())
    {
        for (int i = qp.size(); i > 0; --i)
        {
            pair<int, int> tmp = qp.front();
            qp.pop();
            p[tmp.first][tmp.second] += 1;
            int x = tmp.first - 1;
            int y = tmp.second;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !p[x][y])
                {
                    qp.push({x, y});
                }
            }
            x = tmp.first + 1;
            y = tmp.second;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !p[x][y])
                {
                    qp.push({x, y});
                }
            }
            x = tmp.first;
            y = tmp.second - 1;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !p[x][y])
                {
                    qp.push({x, y});
                }
            }
            x = tmp.first;
            y = tmp.second + 1;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !p[x][y])
                {
                    qp.push({x, y});
                }
            }
        }
        for (int i = qa.size(); i > 0; --i)
        {
            pair<int, int> tmp = qa.front();
            qa.pop();
            a[tmp.first][tmp.second] += 1;
            int x = tmp.first - 1;
            int y = tmp.second;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !a[x][y])
                {
                    qa.push({x, y});
                }
            }
            x = tmp.first + 1;
            y = tmp.second;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !a[x][y])
                {
                    qa.push({x, y});
                }
            }
            x = tmp.first;
            y = tmp.second - 1;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !a[x][y])
                {
                    qa.push({x, y});
                }
            }
            x = tmp.first;
            y = tmp.second + 1;
            if ((0 <= x) && (x < n) && (0 <= y) && (y < m))
            {
                if (heights[x][y] >= heights[tmp.first][tmp.second] && !a[x][y])
                {
                    qa.push({x, y});
                }
            }
        }
    }
    vector<vector<int>> ret;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] && p[i][j])
            {
                ret.push_back({i, j});
            }
        }
    }
    return ret;
}

int main(){
    vector<vector<int>> v = {{1,1},{1,1},{1,1}};
    vector<vector<int>> tmp = pacificAtlantic(v);
    for(auto x:tmp){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<"\n";
    } 
}