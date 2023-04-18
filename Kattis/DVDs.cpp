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
        int count = 0; 
        int pos = 1;
        for(int i = 0; i<n;++i){
            int a;
            cin>>a;
            if (pos != a){
                count +=1;
            }
            else{
                pos+=1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}