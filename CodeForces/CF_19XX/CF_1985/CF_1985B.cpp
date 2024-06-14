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
        int ma = 0;
        int best = 2;
        for (int i = 2; i<=n; ++i){
            int k = n/i;
            if(ma < (k*(k+1)/2)*i){
                ma = (k*(k+1)/2)*i;
                best = i;
            }
        }
        cout<<best<<"\n";
    }
    return 0;
}