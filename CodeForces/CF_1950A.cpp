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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a<b && b < c){
            cout<<"STAIR\n";
        }
        else if (a<b && b>c){
            cout<<"PEAK\n";
        }
        else{
            cout<<"NONE\n";
        }
    }
    return 0;
}