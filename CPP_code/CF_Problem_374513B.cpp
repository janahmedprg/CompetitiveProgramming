#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> even;
    vector<int> odd;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){      
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    sort(odd.begin(),odd.end());
    long long sum=0;
    for(int i = 0; i<even.size();i++){
        sum +=even[i];
    }
    for(int i = 0; i<odd.size();i++){
        sum +=odd[i];
    }
    if(odd.size()%2!=0 && odd.size()>0){
        sum-=odd[0];
    }
    cout<<sum<<"\n";
    return 0;
}