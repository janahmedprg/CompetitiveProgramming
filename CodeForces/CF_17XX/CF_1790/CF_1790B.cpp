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
        int n,s,r;
        cin>>n>>s>>r;
        cout<< s-r<<" ";
        int k = r;
        for(int i = 0;i<n-1;++i){
            if(k == n-1-i){
                cout<<1<<" ";
                k-=1;
            }
            else if(s-r<=k-(n-2-i)){
                cout<<s-r<<" ";
                k-=s-r;
            }
            else{
                cout<<k-(n-2-i)<<" ";
                k -= k-(n-2-i);
            }
        }
        cout<<"\n";
    }
    return 0;
}