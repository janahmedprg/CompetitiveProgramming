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
        int curr =-1;
        bool flag = true;
        for (int i =0; i<n; ++i){
            int x;
            cin>>x;
            if (curr>x){
                flag = false;
            }
            curr = x;
        }
        int out = (flag == false) ? 1 : n;
        cout<<out<<"\n";
    }
    return 0;
}