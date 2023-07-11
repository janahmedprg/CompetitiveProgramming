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
        string s;
        cin>>s;
        map<char,int> m;
        m['A'] = 1;
        m['B'] = 10;
        m['C'] = 100;
        m['D'] = 1000;
        m['E'] = 10000;
        ll count = 0;
        ll ncount = 0;
        int highest = 1;
        for(int i = s.size() - 1; i>=0;i--){

     if(m[s[i]] > highest){
         highest = m[s[i]];
            }
            if(m[s[i]] >= highest){
                count += m[s[i]];
            }
            else{
                ncount -= m[s[i]];
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}