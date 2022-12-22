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
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int count = 0;
        if(a-c==0 || b-d==0){
            count += 1;
        }
        if(a-e == 0 || b-f==0){
            count += 1;
        }
        if(c-e == 0 || d-f == 0){
            count += 1;
        }
        if(count < 2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}