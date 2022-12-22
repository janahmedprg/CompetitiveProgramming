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
        string s;
        int k;
        cin>>k >> s;
        int m = 0;
        for(int i = 0; i<k; ++i){
            if ( (int)s[i] > m){
                m = (int)s[i];
            }
        }
        cout<< m - 96<<"\n";
    }
    return 0;
}