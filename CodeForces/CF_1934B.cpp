#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin>>n;
        ll mi = 1000000000;
        for(int i = 0; i<=2; ++i){
            for(int j = 0; j<=2; ++j){
                for(int k = 0; k<=4; ++k){
                    for(int h = 0; h<=2; ++h){
                        if((n-i*1 -j*3 - k*6 - h*10)>=0 && (n-i*1 -j*3 - k*6 - h*10)%15 ==0){
                            mi = min(mi, i+j+k+h+(n-i*1 -j*3 - k*6 - h*10)/15);    
                        }
                    }
                }
            }
            
        }
        cout<<mi<<"\n";
    }
    return 0;
}