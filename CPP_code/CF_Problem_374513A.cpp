#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int pos,neg;
    pos = 0;
    neg = 0;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            pos++;
        }
        if(x<0){
            neg++;
        }
    }
    n = (n+1)/2;
    if(n<=pos){
        cout<<6<<"\n";
    }
    else if(n<=neg){
        cout<<-9<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;
}