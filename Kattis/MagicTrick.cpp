#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>> s;
    map<char,int> m;
    int k = s.length();
    for(int i =0; i<k; ++i){
        if(m.count(s[i])==1){
            cout<<"0"<<"\n";
            return 0;
        }
        m[s[i]] = 1;
    }
    cout<<"1\n";
    return 0;
}