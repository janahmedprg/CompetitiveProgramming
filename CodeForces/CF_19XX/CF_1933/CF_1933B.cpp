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
        vector<ll> v(n);
        ll su=0;
        for (ll i = 0; i<n; ++i){
            cin>>v[i];
            su += v[i];
        }
        if(su%3 == 0){
            cout<<"0\n";
        }
        else if(su%3 == 2){
            cout<<"1\n";
        }
        else{
            bool flag = true;
            for (auto x:v){
                if(x%3 == 1){
                    cout<<"1\n";
                    flag = false;
                    break;
                }
            }
            if (flag){
                cout<<"2\n";
            }
        }
    }
    return 0;
}