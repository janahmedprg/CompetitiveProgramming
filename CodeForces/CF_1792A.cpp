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
        int c =0;
        for(int i = 0;i<n;++i){
            int a;
            cin>>a;
            if(a==1){
                c+=1;
            }
        }
        int ret=(c+1)/2 + n-c;
        cout<<ret<<"\n";
    }
    return 0;
}