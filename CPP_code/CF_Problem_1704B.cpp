#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        long long n,x;
        cin>>n>>x;
        long long changes = 0;
        long long a,v1,v2,b;
        cin>>a;
        v1 = x+a;
        v2 = a-x;
        for(int i = 0; i<n-1;++i){
            cin>>a;
            long long b1=x+a;
            long long b2 = a-x;
            if(!((b1>=v1 || b2<=v2) && v1>=b2 && v2<=b1)){
                changes += 1;
                v1 = b1;
                v2 = b2;
            }
            else{
                if(b1<v1){
                    v1 = b1;
                }
                if(b2>v2){
                    v2 = b2;
                }
            }
        }
        cout<<changes<<"\n";
    }
    return 0;
}