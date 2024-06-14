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
        ll sum = 0;
        vector<ll> pf;
        for(int i = 0;i<n;++i){
            ll a;
            cin>>a;
            sum+=a;
            pf.push_back(sum);
        }
        ll best = 1;
        for(int i = 0;i<n-1;++i){
            best = max(best,gcd(pf[i],sum-pf[i]));
        }
        cout<<best<<"\n";
        
    }
    return 0;
}