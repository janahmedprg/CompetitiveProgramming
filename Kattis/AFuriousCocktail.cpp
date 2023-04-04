#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    vector<int> v(n);
    for(int i = 0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    bool flag = false;
    for(int i = 0;i<n;++i){
        if(v[i]-i*d<=0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return 0;
}