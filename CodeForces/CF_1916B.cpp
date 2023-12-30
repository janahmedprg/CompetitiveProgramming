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
        ll a,b;
        cin>>a>>b;
        ll g = __gcd(a,b);
        if(a==1){
            cout<<b*b<<"\n";
        }
        else if(g ==1){
            cout<<a*b<<"\n";
        }
        else if(a*b/g==b){
            cout<<b*(b/g)<<"\n";
        }
        else{
            cout<<a*b/g<<"\n";
        }
    }
    return 0;
}