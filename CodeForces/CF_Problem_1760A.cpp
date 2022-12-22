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
        int a,b,c;
        cin>>a>>b>>c;
        int m;
        if(a<b && c<b){
            if (a<c){
                m = c;
            } 
            else{
                m = a;
            }
        }
        else if (b<a && c<a){
            if (b<c){
                m = c;
            }
            else {
                m = b;
            }
        }
        else{
            if(a<b){
                m = b;
            }
            else{
                m = a;
            }
        }
        cout << m <<"\n";
    }
    return 0;
}