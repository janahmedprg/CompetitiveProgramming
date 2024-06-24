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
        int a,b,c;
        cin>>a>>b>>c;
        int turns = 7*(a+b+c)/9;
        if (turns<7){
            cout<<"NO\n";
        }
        else if (a<turns/7 || b<turns/7 || c<turns/7 || (a+b+c) % 9 != 0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}