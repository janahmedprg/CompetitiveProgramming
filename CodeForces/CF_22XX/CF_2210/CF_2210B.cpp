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
        int n;
        cin>>n;
        read_vector(v,n);

        int count = 0;
        int max_sit = 0;
        vector<int> visited(n,-1);
        for (int i = 0; i<n; ++i) {
            if (visited[i] == 1) {
                max_sit = max(max_sit, count);
                visited[v[i] - 1] = 1;
                count -= 1;
            }
            else {
                count += 1;
                visited[v[i] - 1] = 1;
            }
        }
        if (max_sit == 0) {
            max_sit = count;
        }
        cout<<max_sit<<"\n";
    }
    return 0;
}