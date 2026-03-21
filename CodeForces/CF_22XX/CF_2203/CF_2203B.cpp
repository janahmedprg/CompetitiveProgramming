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
        string s;
        cin >> s;
        vector<int> a(s.size());
        int su = (int)s[0] - 48;
        a[0] = (int)s[0] - 49;
        for(int i = 1; i<s.size(); i++){
            a[i] = (int)s[i] - 48;
            su += (int)s[i] - 48;
        }
        sort(a.begin(), a.end(),greater<int>());
        int count = 0;
        for (int x: a){
            if (su <10){
                break;
            }
            su -= x;
            count += 1;
        }
        cout<< count<<"\n";
    }
    return 0;
}