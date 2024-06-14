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
        ll a;
        cin>>a;
        int flag= a%2;
        for(int i = 1; i<n;++i){
            cin >>a;
            if(a%2 != flag){
                flag = a%2;
            }
            else{
                c+=1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}