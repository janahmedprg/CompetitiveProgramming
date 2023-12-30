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
        int n;
        cin>>n;
        bool flag = true;
        int idx = 0;
        for (int i = 0; i<n; ++i){
            int a;
            cin>>a;
            if (a>0){
                idx = i;
                flag = false;
            }
        }
        if(flag){
            cout<<n-1<<"\n";
            for(int i = n; i>1;--i){
                cout<<i-1<<" "<<i<<"\n";
            }
        }
        else{
            if(n>1){
                cout<<5+2*(n-1)<<"\n";
                for(int i = 0; i<5; ++i ){
                    cout<<idx+1<<" "<<idx+1<<"\n";
                }
                cout<<2<<" "<<idx+1<<"\n";
                cout<<2<<" "<<idx+1<<"\n";
                for(int i = 2; i<n; ++i){
                    cout<<i+1<<" "<<i<<"\n";
                    cout<<i+1<<" "<<i<<"\n";
                }
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}