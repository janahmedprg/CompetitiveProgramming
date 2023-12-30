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
        int count = 0;
        for(int i = 1; i<=n; ++i){
            int a;
            cin>>a;
            if(i == a){
                count +=1;
            }
        }
        cout<<(count+1)/2<<"\n";
    }
    return 0;
}