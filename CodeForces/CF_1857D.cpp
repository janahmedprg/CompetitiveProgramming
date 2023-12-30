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
        vector<ll> a(n);
        vector<ll> b(n);
        for (int i = 0;i<n;++i){
            cin>>a[i];
        }
        for(int i = 0; i<n;++i){
            cin>>b[i];
        }
        int c = 0;
        ll ma = a[0] - b[0];
        vector<int> ret;
        for(int i = 0; i<n;++i){
            if(a[i] - b[i] > ma){
                ma = a[i] - b[i];
                c = 0;
            }
            if(a[i] - b[i] == ma){
                c+=1;
            }
        }
        cout<< c<<"\n";
        for(int i = 0; i<n; ++i){
            if (a[i] - b[i] == ma){
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}