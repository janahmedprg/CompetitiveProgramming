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
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;
        int da = a;
        if(da>w-a){
            da = w-a;
        }
        int db = b;
        if(db>d-b){
            db = d-b;
        }
        int df=f;
        if(df>w-f){
            df=w-f;
        }
        int dg = g;
        if(dg > d-g){
            dg = d-g;
        }
        int mi = min(min(min(da,db),dg),df);
        cout<<mi*2 + h + abs(a-f)+abs(b-g)<<"\n";
    }
    return 0;
}