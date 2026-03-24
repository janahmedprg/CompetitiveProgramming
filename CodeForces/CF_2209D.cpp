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
        int r,g,b, rg, rb, gb;
        cin>>r>>g>>b;

        rg = 0;
        rb = 0;
        gb = 0;

        while (((r > 0) + (g > 0) + (b > 0)) / 2 > 0) {
            if (r <= g && r <= b) {
                gb += 1;
                g -= 1;
                b -= 1;
            }
            else if (g <= r && g <= b) {
                rb += 1;
                r -= 1;
                b -= 1;
            }
            else if (b <= r && b <= g) {
                rg += 1;
                r -= 1;
                g -= 1;
            }
        }

        if (r > 0) {
            cout<<"R";
            while (rb) {
                cout<< "BR";
                rb -= 1;
            }
            bool flag = false;
            while (rg) {
                cout<<"GR";
                flag = true;
                rg -=1;
            }
            while (gb) {
                if (flag ) {
                    cout<<"GB";
                }
                else {
                    cout<<"BG";
                }
                gb -= 1;
            }
        }
        else if (g > 0) {
            cout<<"G";
            while (gb) {
                cout<< "BG";
                gb -= 1;
            }
            bool flag = false;
            while (rg) {
                cout<<"RG";
                flag = true;
                rg -=1;
            }
            while (rb) {
                if (flag ) {
                    cout<<"RB";
                }
                else {
                    cout<<"BR";
                }
                rb -= 1;
            }
        }
        else {
            if (b > 0)
                cout<<'B';
            while (rb) {
                cout<< "RB";
                rb -= 1;
            }
            bool flag = false;
            while (gb) {
                cout<<"GB";
                flag = true;
                gb -=1;
            }
            while (rg) {
                if (flag ) {
                    cout<<"GR";
                }
                else {
                    cout<<"RG";
                }
                rg -= 1;
            }
        }
        cout<<"\n";
    }
    return 0;
}