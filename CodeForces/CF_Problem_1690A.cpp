#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n;
        cin>>n;
        int first,second,third;
        if(n%3==0){
            first = n/3+1;
            second = first - 1;
            third = n-first-second;
        }else{
            first = n/3+2;
            second = first - 1;
            third = n-first-second;
        }
        if (third<=0){
            third = 1;
            first = (n-1)/2+1;
            second = n-1-first;
        }
        cout<<second<< " "<<first<<" "<< third<<"\n";
    }
    return 0;
}