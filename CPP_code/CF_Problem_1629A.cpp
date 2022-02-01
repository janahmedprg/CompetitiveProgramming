#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        vector<pair<int,int>> v;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i]=a;
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            v.push_back(make_pair(arr[i],b));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if (v[i].first>k){
                break;
            }
            else{
                k+=v[i].second;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}