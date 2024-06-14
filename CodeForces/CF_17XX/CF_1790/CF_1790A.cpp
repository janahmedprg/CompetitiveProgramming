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
        string pi = "314159265358979323846264338327";
        string s;
        cin>>s;
        int k = s.size();
        int c = 0;
        for (int i = 0; i<k;++i){
            if(s[i]==pi[i]){
                c +=1;
            }
            else{
                break;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}