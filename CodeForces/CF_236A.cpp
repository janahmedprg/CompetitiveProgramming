#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char,int> m;
    int n = s.size();
    for(int i = 0;i<n;++i){
        m[s[i]] = 1;
    }
    if(m.size()%2 == 1){
        cout<<"IGNORE HIM!\n";
    }
    else{
        cout<<"CHAT WITH HER!\n";
    }
    return 0;
}