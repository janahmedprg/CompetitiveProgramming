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
        int c = 0;
        for (int i = 0;i<n;++i){
            int a;
            cin>>a;
            if(a%2!=0){
                c+=1;
            } 
        }
        if(c%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}