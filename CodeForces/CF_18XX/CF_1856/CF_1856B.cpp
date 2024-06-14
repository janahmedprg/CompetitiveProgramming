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
        int c = 0;
        ll sum = 0;
        for(int i = 0; i<n;++i){
            ll a;
            cin>>a;
            if (a == 1){
                c+=1;
            }
            else{
                sum +=a-1;
            }
        }
        if(n == 1){
            cout<<"NO\n";
            continue;
        }
        if(sum >= c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}