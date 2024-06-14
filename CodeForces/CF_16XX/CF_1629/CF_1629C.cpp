#include<iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n;
        cin>>n;
        vector<int> v;
        if(n==0){
            continue;
        }
        else if(n==1){
            int a;
            cin>> a;
            if (a==0){
                cout<<1<<endl;
                cout<<1<<endl;
                continue;
            }
            else{
                cout<<1<<endl;
                cout<<0<<endl;
                continue;
            }
        }
        int mat[n][n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n+1;j++){
                mat[i][j]=-1;
            }
        }
        int h=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mat[h][a]=a;
            h+=1;
        }

        int height=-1;
        while(height+1<n){
            int h = height;
            for(int i=0;i<n+1;i++){
                bool val = false;
                for (int j=h+1;j<n;j++){
                    if(mat[j][i]!=-1){
                        if(height<j){
                            height=j;
                        }
                        val = true;
                        break;
                    }
                }
                if (!val){
                    v.push_back(i);
                    if(i==0){
                        height = n;
                    }
                    break;
                }
            }
        }
        cout<<v.size()<<endl;
        for (int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}