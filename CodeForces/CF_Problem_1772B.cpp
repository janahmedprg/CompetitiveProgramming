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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b && c<d && a<c && b<d){
            cout<<"YES"<<"\n";
        }
        else if(c<a && d<b && c<d && a< b){
            cout<<"YES"<<"\n";
        }
        else if(d<c && b<a && d<b && c<a){
            cout<<"YES"<<"\n";
        }
        else if(b<d && a<c && b<a && d<c){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}