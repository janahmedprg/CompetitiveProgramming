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
        string a,b,c;
        cin>>n>>a>>b>>c;
        bool flag = false;
        for (int i =0; i<n; ++i){
            if(!(a[i] == c[i] || b[i] == c[i])){
                flag = true;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}