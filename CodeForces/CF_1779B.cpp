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
        if(n != 3){
            cout<<"YES\n";
            ll a = 1 - n/2;
            if(n%2 == 0 ){
                for(int i = 0; i<n;++i){
                    if(i%2==0){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<-1<<" ";
                    }
                }
                cout<<"\n";
                continue;
            }
            for(int i = 0; i<n;++i){
                if(i%2==0){
                    cout<<a<<" ";
                }
                else{
                    cout<<1-a<<" ";
                }

            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}