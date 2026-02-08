#include <bits/stdc++.h>
#define int long long int

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
        if(k == 1){
            cout<<1<<"\n";
        }
        else if(k==2){
            if(m<=n){
                cout<<m<<"\n";
            }
            else{
                cout<<n+(m-n)/n<<"\n";
            }
        }
        else if(k==3){
            if(m<=n){
                cout<<0<<"\n";
            }
            else{
                cout<<m-n-(m-n)/n<<"\n";
            }
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}