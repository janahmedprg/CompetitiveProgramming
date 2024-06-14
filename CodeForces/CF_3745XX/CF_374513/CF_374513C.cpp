#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int ii = 0; ii<t;ii++){
        long long n;
        cin>>n;
        long long a = -1;
        long long b = -1;
        for(int i = 2;i<=sqrt(n);i++){
            if(n%i==0){
                a = n/i;
                b = n-a;
                break;
            }
        }
        if(a==-1){
            cout<<1<<" "<<n-1<<"\n";
        }
        else{
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}