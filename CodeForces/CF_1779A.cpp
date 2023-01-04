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
        bool fl = false;
        bool flag = false;
        string s;
        cin>>s;
        for(ll i =0; i<n;++i){
            if(s[i] == 'L'){
                fl = true;
            }
            if(s[i] == 'R'){
                flag = true;
            }
        }
        if(!(flag && fl)){
            cout<<-1<<"\n";
            continue;
        }
        if(s[0] == 'R'){
            cout<<0<<"\n";
            continue;
        }
        for(ll i = 1; i<n;++i){
            if(s[i] == 'R'){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}