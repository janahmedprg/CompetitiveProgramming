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
        int n,k;
        cin>>k>>n;
        int a = 1;
        int r = n-k;
        cout<<1<<" ";
        for(int i = 1;i<k;++i){
            cout<<a+i<<" ";
            if(r>0){
                r-=i;
                int x = i;
                if(r<0){
                   x = r + i; 
                }
                a+=x;
            }
        }
        cout<<"\n";
    }
    return 0;
}