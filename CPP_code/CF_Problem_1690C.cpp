#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n;
        cin>>n;
        long long a[n];
        vector<int> v;
        for(int i= 0;i<n;++i){
            long long x;
            cin>>x;
            a[i]=x;
        }
        long long b;
        cin>>b;
        long long end= b;
        v.push_back(b-a[0]);
        for (int i=1;i<n;++i){
            cin>>b;
            if(a[i]>end){
                end = a[i];
            }
            v.push_back(b-end);
            end=b;
        }
        for(int i=0;i<n;++i){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}