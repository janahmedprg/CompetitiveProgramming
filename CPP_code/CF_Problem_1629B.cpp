#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        long l,r,k;
        cin>>l>>r>>k;
        if (l==r && l!=1){
            cout<<"YES"<<endl;
            continue;
        }
        else if (l==r && l==1){
            cout<<"NO"<<endl;
            continue;
        }

        long nodds = floor((r-l)/2);
        
        if(l%2==1){
            nodds+=1;
        }
        else if(r%2==1){
            nodds+=1;
        }

        if (k<nodds){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}