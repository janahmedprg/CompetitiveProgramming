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
        ll n;
        cin>>n;
        string s,f;
        cin>>s>>f;
        ll sf = 0;
        ll fs = 0;
        for(int i = 0; i< n; ++i){
            if(s[i] == '0' && f[i] == '1'){
                sf += 1;
            }
            else if ( s[i] == '1' && f[i] == '0'){
                fs += 1;
            }
        }
        cout<< fs+sf - min(sf,fs)<<"\n";
    }
    return 0;
}