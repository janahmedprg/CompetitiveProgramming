#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        vector<pair<int,pair<int,int>>> v;
        int n,m;
        cin>>n>>m;
        for (int i = 0; i<m;i++){
            int x,w;
            cin>> x>> w;
            v.push_back({w, {x,i+1}});
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>> coor;
        int sum=0;
        for(int i = 0; i< 2*n;i++){
            sum+= v[i].first;
            coor.push_back(v[i].second);
        }
        sort(coor.begin(), coor.end());

        cout<< sum<<endl;

        // for(int i = 0; i< 2*n; i++){
        //     cout<< coor[i]<<endl;
        // }

        for(int i = 0; i< n;i++){
            cout<< coor[i].second << " "<< coor[2*n-i-1].second<< endl;
        }

    }
}