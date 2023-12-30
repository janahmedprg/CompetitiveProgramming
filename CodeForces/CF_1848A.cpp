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
        int n,m,k;
        cin>> n>>m>>k;
        int x,y;
        cin>>x>>y;
        bool flag =false;

        for (int i = 0; i<k; ++i){
            int a,b;
            cin>>a>>b;
            if((abs(x-a) + abs(y-b))%2 == 0){
                flag = true;
            }
        }

        if(!flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}