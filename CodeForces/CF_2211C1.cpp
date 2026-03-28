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
        int n, k;
        cin>>n>>k;
        read_vector(a, n);
        read_vector(b, n);
        int free = (n+1)/2;
        vector<int> a_freq(n+1, 0);
        vector<int> b_freq(n+1, 0);
        bool flag = false;

        if (k<= free) {
            for (int i = 0; i<n; ++i) {
                if (a[i] != b[i] && b[i] != -1) {
                    flag = true;
                }
            }
        }
        else {
            int count = 0;
            for (int i = 0; i<n; ++i) {
                if (i < n-k || i >= k) {
                    if (a[i] != b[i] && b[i] != -1) {
                        flag = true;
                    }
                }
                else {
                    a_freq[a[i]] += 1;
                    if (b[i] != -1) {
                        b_freq[b[i]] += 1;
                    }
                    else {
                        count += 1;
                    }
                }
            }
            if (!flag) {
                for (int i = 0; i<n; ++i) {
                    if (a_freq[i] > b_freq[i]) {
                        int dif = a_freq[i] - b_freq[i];
                        count -= dif;
                        if (count<0){
                            flag = true;
                            break;
                        }
                    }
                    if (b_freq[i] > a_freq[i]) {
                        flag = true;
                        break;
                    }
                }
            }

        }
        if (flag == true) {
            cout<<"NO\n";
            continue;
        }
        else {
            cout<<"YES\n";
        }
    }
    return 0;
}