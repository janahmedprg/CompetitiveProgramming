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
        int n;
        cin>>n;
        ll mul = 1;
        for(int i = 0; i<n;++i){
            ll a;
            cin>>a;
            mul *=a;
        }
        cout<<(mul +(n-1))*2022<<"\n";
    }
    return 0;
}