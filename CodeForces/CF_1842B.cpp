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
        ll n,x;
        cin>>n>>x;
        ll a;
        bool flag = true;
        ll curr = 0;
        for(int i = 0;i<n; ++i){
            cin>>a;
            if(((curr | a) | x) == x && flag){
                curr = curr | a;
            }
            else{
                flag = false;
            }
        }
        flag = true;
        for(int i = 0;i<n; ++i){
            cin>>a;
            if(((curr | a) | x) == x && flag){
                curr = curr | a;
            }
            else{
                flag = false;
            }
        }
        flag = true;
        for(int i = 0;i<n; ++i){
            cin>>a;
            if(((curr | a) | x) == x && flag){
                curr = curr | a;
            }
            else{
                flag = false;
            }
        }
        if(curr == x){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}