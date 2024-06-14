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
        ll x,y;
        cin>>x>>y;
        ll x1,y1;
        x1 = x;
        y1 = y;
        ll maX = abs(x1-x);
        ll maY = abs(y1-y);
        for(int i = 0; i<3; ++i){
            x1 = x;
            y1 = y;
            cin>>x>>y;
            maX = max(abs(x1-x), maX);
            maY = max(abs(y1-y), maY);
        }
        cout<<maY * maX<<"\n";
    }
    return 0;
}