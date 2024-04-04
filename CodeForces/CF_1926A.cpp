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
        unordered_map<char, int> m;
        for(int i = 0; i<s.size(); ++i){
            m[s[i]] += 1;
        }
        if(m['B'] < m['A']){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}