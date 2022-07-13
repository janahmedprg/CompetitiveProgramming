#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        string s;
        cin>>s;
        if((s[0]=='Y' || s[0]=='y') && (s[1]=='E' || s[1] == 'e') && (s[2] == 's'||s[2]=='S')){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}