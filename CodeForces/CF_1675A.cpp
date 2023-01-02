#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        long long dD=x-a;
        long long dC=y-b;
        if(dD<0){
            dD=0;
        }
        if(dC<0){
            dC=0;
        }
        long long dT = dD+dC;
        if(dT-c<=0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}