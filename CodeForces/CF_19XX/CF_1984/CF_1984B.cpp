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
        string x;
        cin>>x;
        int n = x.size();
        if (x[0] != '1' || x[n-1] == '9'){
            cout<<"NO\n";
            continue;
        }
        if(n==2){
            cout<<"YES\n";
            continue;
        }
        bool flag = true;
        for (int i = n-2; i>0; --i){ 
            int digit = x[i] - '0';
            if (digit == 0){
                cout<<"NO\n";
                flag = false;
                break;
            } 
        }
        if (flag){
            cout<<"YES\n";
        }
    }
    return 0;
}