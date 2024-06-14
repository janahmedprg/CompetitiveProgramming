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
        ll n,m;
        cin>>n>>m;
        ll ma = 0;
        ll line = 0;
        string sline = "";
        for (int i = 0; i<n; ++i){
            string tmp;
            cin>>tmp;
            ll c = 0;
            for (int j = 0; j<m; ++j){
                if(tmp[j] == '#'){
                    c += 1;
                }
            }
            if (c>ma){
                ma = c;
                line = i;
                sline = tmp;
            }
        }
        int col = 0;
        int count = 0;
        for (int i = 0; i<m; ++i){
            if (sline[i] == '#'){
                count += 1;
                if (ma/2 < count){
                    col = i;
                    break;
                }
            }
        }
        cout<<line + 1<< " "<<col + 1<<"\n";
    }
    return 0;
}