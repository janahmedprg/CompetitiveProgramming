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
        string sus;
        cin >> sus;        
        bool flag = false;
        int count = 0;
        for (char c : sus) {
            if (c == 's') {
                flag = true;
            }
            else {
                if (flag) {
                    flag = false;
                }
                else {
                    count += 1;
                    flag = true;
                }
            }
        }
        if (sus[sus.length() - 1] == 'u' && flag == false) {
            count += 1;
        }
        cout << count << "\n";
    }
    return 0;
}