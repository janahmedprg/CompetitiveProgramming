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
        ll ts = 0;
        ll ten = 0;
        ll x,y;
        int n;
        int m;
        cin>>n>>m;
        for (int i = 0; i<n; ++i){
            cin>>x;
            ts += x;
        }
        for(int i = 0; i<m; ++i){
            cin>>y;
            ten += y;
        }
        if(ts>ten){
            cout<<"Tsondu\n";
        }
        else if (ten>ts){
            cout<<"Tenzing\n";
        }
        else{
            cout<<"Draw\n";
        }

    }
    return 0;
}