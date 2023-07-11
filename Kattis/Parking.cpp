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
        int mi = 1000;
        int ma = -1;
        for(int i = 0; i<n;++i){
            int a;
            cin>>a;

            if(a>ma){
                ma = a;
            }
            if(a<mi){
                mi = a;
            }
        }
        cout<<(ma-mi)*2<<endl;
    }
    return 0;
}