#include <bits/stdc++.h>
#define int long long int

using namespace std;
using ll = long long;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int rounds = 0;
    
    while(n>0 && m>0){
        if (n == 1 && m == 1){
            break; 
        }
        if(n<m){
            rounds += 1;
            m -= 2;
            n+=1;
        }
        else{
            rounds += 1;
            n-= 2;
            m+=1;
        }
    }
    cout<<rounds<<"\n";
    return 0;
}