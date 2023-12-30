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
        int n,k;
        int prod = 1;
        cin>>n>>k; 
        for(int i = 0; i<n;++i){
            int  tmp;
            cin>>tmp;
            prod*=tmp;
        }
        if(prod*(2023/prod) == 2023){
            cout<<"YES\n"<<2023/prod<<" ";
            for(int i = 1;i<k;++i){
                cout<<1<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}