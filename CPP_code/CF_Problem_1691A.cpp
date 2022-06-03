#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int te = 0; te<t;te++){
        int n;
        cin>>n;
        int evens = 0;
        int odds = 0;
        for(int i=0;i<n;++i){
            int a;
            cin>>a;
            if(a%2==0){
                evens += 1;
            }
            else{
                odds += 1;
            }
        }
        if (evens>odds){
            cout<<odds<<"\n";
        }
        else {
            cout<<evens<<"\n";
        }
    }
    return 0;
}