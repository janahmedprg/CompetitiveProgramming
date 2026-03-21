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
        string b;
        cin>>b;
        b += "00";
        n += 2;
        int mi = 0;
        int ma = 0;
        int curr = 0;
        bool flag = true;
        for (int i = 0; i<n; ++i){
            if (b[i] == '0' && flag == true) {
                if (curr != 0) {
                    mi += (curr-1)/2 + 1;
                    ma += (curr-1);
                }
                curr = 0;
            }
            if (b[i] == '0' && flag == false) {
                flag = true;
                curr += 1;
            }
            if (b[i] == '1'){
                flag = false;
                curr += 1;
            }
        }
        cout<<mi << " "<<ma<<"\n";
    }
    return 0;
}