#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0;i<n;++i){
        cin>>v[i].first>>v[i].second; 
    } 
    sort(v.begin(),v.end(),cmp);
    int count = 1;
    int cm = v[0].second;
    for(int i = 0;i<n-1;++i){
        if(cm <= v[i+1].first){
            cm = v[i+1].second;
            count += 1;
        }
    }
    cout<<count<<"\n";
    return 0;
}