#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n,k;
        cin>>n>>k;
        for(int i = 1;i<=n/2;++i){
            cout<<n-i+1<<" "<<i<<" ";
        }
        if(n%2==1){
            cout<<n/2+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}