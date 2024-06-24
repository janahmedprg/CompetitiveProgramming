#include <bits/stdc++.h>
#define int long long int

using namespace std;
using ll = long long;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    int c = 0;
    cin>>v[0];
    for (int i = 1; i<n; ++i){
        cin>>v[i];
        if (v[i] + v[i-1] < k){
            c += k - (v[i] + v[i-1]);
            v[i] += k - (v[i] + v[i-1]);
        }
    }
    cout<<c<<"\n";
    for (auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}