#include <bits/stdc++.h>
 
using namespace std;
 
 
vector<vector<int>> p;
 
bool checker(int x,int m,int n){
    vector<bool> got(n);
    bool flag = false;
    for(int i = 0; i<m;++i){
        int count = 0;
        for(int j = 0; j<n; ++j){
            if(p[i][j] >= x){
                got[j] = true;
                count += 1;
            }
        }
        if (count > 1){
            flag = true;
        }
    }
    if(!flag && n>1){
        return false;
    }
    bool ret = true;
    for(bool b:got){
        ret = ret && b;
    }
    return ret;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>m>>n;
        p.assign(m, vector<int>(n));
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                int a;
                cin>>a;
                p[i][j] = a;
            }
        }
        int mi = 1;
        int ma = 2;
        while (checker(ma,m,n)){
            ma *=2;
        }
        while(ma - mi > 1){
            int mid = (ma+mi)/2;
            if (checker(mid,m,n)){
                mi = mid;
            }
            else {
                ma = mid;
            }
        }
        cout<< mi<<"\n";
    }
    return 0;
}