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
        int n,m;
        cin>>n>>m;
        map<int, int> a;
        bool gg = false;
        int ma = 0;
        for (int i = 0; i<n; ++i){
            int key;
            cin>>key;
            ma = max(ma, key);
            a[key] = 1;
            if (key == 1) {
                gg = true;
            }
        }
        int alice = 0;
        int bob = 0;
        int bobToo = 0;
        bool flag = false;
        for (int i = 0; i<m; ++i){
            int x;
            cin>>x;
            int flag = alice;
            for (int j = 2; j < sqrt(x)+1; ++j){
                if (a.count(j) && x % j == 0) {
                    alice += 1;
                    break;
                }
                else if(a.count(j)){
                    flag = true;
                }
            }
            if (flag == alice || (x == 1 && ma != 1)){
                bob += 1;
            }
            else if(sqrt(x) < ma || flag) {
                bobToo += 1;
                flag = false;
            }
        }
        bob += bobToo/2;
        if (gg){
            alice = m;
        }
        if (alice > bob || (bob == alice && m % 2 == 1)){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
        
    }
    return 0;
}