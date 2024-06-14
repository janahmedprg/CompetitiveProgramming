#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    vector<pair<int, int>> v(26);
    int ma = 0;
    for(int i = 0; i<n; ++i){
        v[(int)s[i]-97].first+=1; 
        v[(int)s[i]-97].second = (int)s[i];
        if(v[(int)s[i]-97].first>ma){
            ma = v[(int)s[i]-97].first;
        }
    }
    if(ma<=n-ma){
        sort(v.rbegin(),v.rend());
        int idx = v[0].first;
        string ret = "";
        int k = v.size();
        for(int i = 0;i<k;++i){
            for(int j = 0;j<v[i].first;++j){
                ret += (char)v[i].second;
            }
        }
        string ret2 = ret.substr(idx);
        ret2 += ret.substr(0,idx);
        cout<<ret<<"\n";
        cout<<ret2<<"\n";
    }
    else{
        cout<<"IMPOSSIBLE\n";
    }
    return 0;
}