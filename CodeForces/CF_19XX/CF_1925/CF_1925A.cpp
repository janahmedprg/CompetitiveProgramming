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
        cin>>n>>k;
        string s = "";
        for (int j = 0; j<n; ++j){
            for (int i = 0; i<k; ++i){
                char c = i+97;
                s += c;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}