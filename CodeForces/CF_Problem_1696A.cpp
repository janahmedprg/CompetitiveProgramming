#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        long long n,z;
        cin>>n>>z;
        vector<long long> v;
        for (int i=0;i<n;i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        long long max=v[0];
        for(int i=0;i<n;++i){
            if(v[i]>max){
                max=v[i];
            }
            long long b=v[i]|z;
            if (b > max){
                max=v[i]|z;
            }
            
        }
        cout<<max<<"\n";
    }
    return 0;
}