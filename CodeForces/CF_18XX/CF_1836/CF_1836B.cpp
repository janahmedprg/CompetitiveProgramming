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
        ll n,k,g;
        cin>>n>>k>>g;
        if(n == 2){
            cout<<0<<"\n";
            continue;
        }
        if(n<g) {
            cout<<g<<"\n";
            continue;
        }
        if((k*g+n)/n>=(g+1)/2){
            cout<<((g-1)/2)*n<<"\n";
        }
        else{
            cout<<k*g<<"\n";
        }
    }
    return 0;
}