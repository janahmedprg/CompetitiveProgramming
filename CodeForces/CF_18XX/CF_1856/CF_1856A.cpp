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
        for(int i = 0; i<n;++i){
            cin>>v[i]; 
        }
        int idx = -1;
        for(int i = n-1; i>0;--i){
            if(v[i] < v[i-1]){
                idx = i;
                break;
            }
        }
        ll op = 0;
        for(int i = 0; i<idx;++i){
            if(v[i] > op){
                op = v[i];
            }
        }
        cout<<op<<"\n";
    }
    return 0;
}