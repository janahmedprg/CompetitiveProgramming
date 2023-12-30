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
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        for(int i = 0; i<n; ++i){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        bool flag = true;
        for(int i = 0; i<n;++i){
            if(a[i]+b[i]>x){
                flag = false;
                break;
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