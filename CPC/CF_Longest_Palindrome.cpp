#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b;
    cin >> n>>b;
    vector<string> v(n);
    string ma = "";
    map<string,int> m;
    vector<int> ret;
    string retu = "";
    for(int i = 0;i<n;++i){
        cin>>v[i];
        string tmp = v[i];
        if(m.count(v[i])>0){
            ret.push_back(m[v[i]]);
            retu+=v[i]; 
        }
        reverse(tmp.begin(),tmp.end());
        if(tmp== v[i]){
            if (tmp.size()>ma.size()){
                ma = tmp;
            }
        }
        m[tmp] = i;
    }
    retu += ma;
    for(int i = ret.size()-1;i>=0;--i){
        retu += v[ret[i]];
    }
    cout<<retu.size()<<"\n";
    cout<<retu<<"\n";
    
    return 0;
}