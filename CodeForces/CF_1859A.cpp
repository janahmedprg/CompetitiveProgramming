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
        vector<ll> v(n);
        cin>>v[0];
        ll ma = v[0];
        int c = 1;
        for(int i = 1; i<n;++i){
            cin>>v[i];
            if(ma<v[i]){
                ma = v[i];
                c = 0;
            }
            if(ma == v[i]){
                c +=1;
            }
        }
        if(c == n){
            cout<<-1<<"\n";
        }
        else{
            cout<<n-c<<" "<<c<<"\n";
            for(int i = 0;i<n;++i){
                if(v[i] != ma){
                    cout<<v[i]<<" ";
                }
            }
            cout<<"\n";
            for(int i = 0; i<c;++i){
                cout<<ma<<" ";
            }
            cout<<"\n";
        }
        
    }
    return 0;
}