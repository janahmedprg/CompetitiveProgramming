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
        string a,b;
        cin>>a>>b;
        cout<<b[0]<<a[1]<<a[2]<<" "<<a[0]<<b[1]<<b[2]<<"\n";
    }
    return 0;
}