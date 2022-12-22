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
        cin>> s;
        ll k = s.size();
        bool flag = false;
        for(ll i = k-1; i>0; --i){
            if((int)s[i]+(int)s[i-1]-2*48>=10){
                string tmp = to_string((int)s[i]+(int)s[i-1]-2*48);
                s.replace(i-1,2,tmp);
                flag = true;
                break;
            }
        }
        if (flag){
            cout<< s<<"\n"; 
        }
        else{
            cout<<s.replace(0,2,to_string((int)s[1]+(int)s[0]-2*48))<< "\n";
        }
    }
    return 0;
}