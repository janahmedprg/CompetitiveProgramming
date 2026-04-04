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
        char curr = 'A';
        int b = 0;
        int curr_b = 1;
        int blocks = 0;
        for (int i = 0; i<n; ++i){
            if (curr != s[i]) {
                b = max(b,curr_b);
                curr_b = 1;
                blocks += 1;
                curr = s[i];
            }
            else {
                curr_b += 1;
                curr = s[i];
                b = max(b,curr_b);
            }
        }

        if (b > 1 && s[0] != s[n-1]) {
            cout<<blocks + 1<<"\n";
        }
        else {
            cout<<blocks<<"\n";
        }
    }
    return 0;
}