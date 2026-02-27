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
        string s;
        cin>>s;
        stack<char> sta;
        for (int i = 0; i<n;i++){
            if(sta.size() > 0 && s[i] == sta.top()){
                sta.pop();
            }
            else{
                sta.push(s[i]);
            }
        }
        string out = (sta.size() == 0) ? "YES" : "NO";
        cout<<out<<"\n";
        
    }
    return 0;
}