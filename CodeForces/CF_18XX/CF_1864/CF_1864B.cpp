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
        int n, k;
        string s;
        cin>>n>>k>>s;
        if(k%2 == 0){
            sort(s.begin(),s.end());
            cout<<s<<"\n";
        }
        else{
            string a= "";
            string b="";
            for(int i = 0; i<n; ++i){
                if(i%2 == 0){
                    a+=s[i];
                }
                else{
                    b+=s[i];
                }
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int c1=0;
            int c2 = 0;
            for(int i = 0;i<n;++i){
                if(i%2==0){
                    cout<<a[c1];
                    c1+=1;
                }
                else{
                    cout<<b[c2];
                    c2+=1;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}