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
       int n,m,k;
       cin>>n>>m>>k; 
       string a;
       cin>>a;
       a = 'L' + a + 'L';
       int i = 0;
       bool cooked = false;
       while(i<n+1){
        if(a[i] == 'L'){
            bool flag = true;
            for(int j = m; j>0; --j){
                if(i + j >=n+1){
                    i = n+1;
                    flag = false;
                    break;
                }
                else if(a[i+j] == 'L'){
                    i = i+j;
                    flag = false;
                    break;
                }
            }
            if (flag){
                i = i+m;
            }
        }
        if(a[i] == 'W'){
            if(k == 0){
                cooked = true;
                break;
            }
            else{
                k-= 1;
                i += 1;
            }
        }
        if(a[i] == 'C'){
            cooked = true;
            break;
        }
       }
       if(cooked){
        cout<<"NO\n";
       }
       else{
        cout<<"YES\n";
       }
    }
    return 0;
}