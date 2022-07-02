#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n,k;
        cin>>n>>k;
        int totalB=0;
        int consecutiveB=0;
        int maxCons=0;
        int maxConsIdx=0;
        int idx = 0;
        vector<char> c;
        for(int i=0;i<n;++i){
            char col;
            cin>>col;
            c.push_back(col);
            if(col=='B'){
                if(consecutiveB==0){
                    idx=i;
                }
                consecutiveB+=1;
                totalB+=1;
            }
            else{
                if(maxCons<consecutiveB){
                    maxCons=consecutiveB;
                    maxConsIdx = idx;
                }
                consecutiveB=0;
            }
        }
        int remain = k-maxCons;
        if (remain<=0){
            cout<<0<<"\n";
        }
    }
    return 0;
}