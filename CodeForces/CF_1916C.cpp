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
        int odd = 0;
        int even = 0;
        for(int i = 0;i<n;++i){
            ll tmp;
            cin>>tmp;
            sum+=tmp;
            if(tmp % 2 == 1){
                odd += 1;
            }
            if (i == 0){
                cout<<tmp<<" ";
            }
            else{   
                cout<<sum - odd/3 - (odd%3)%2<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}