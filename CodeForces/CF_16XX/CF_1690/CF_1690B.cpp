#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n;
        cin>>n;
        bool iszero = true;
        long long diff = 0;
        long long diffZero= 0;
        bool isCorr = true;
        long long a[n], b[n];
        for (int i =0;i<n;++i){
            long long x;
            cin >> x;
            a[i]=x;
        }
        for(int i=0;i<n;++i){
            long long x;
            cin>>x;
           b[i]=x; 
        }
        for(int i=0;i<n;++i){
            if(a[i]<b[i]){
                isCorr = false;
            }
            if(b[i]!=0 && iszero){
                diff = a[i]-b[i];
                iszero = false;
            }
            else if(b[i]!=0){
                if(diff!=a[i]-b[i]){
                    isCorr =false;
                }
            }
            else if(b[i] == 0){
               if (a[i]>diffZero){
                   diffZero = a[i];
               } 
            }
        }
        if(diffZero>diff){
            isCorr = false;
        }
        if(iszero){
            isCorr =true;
        }
        if (isCorr){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}