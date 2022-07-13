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
        map<char,int> m;
        int n;
        cin>>n>>s;
        int total =0;
        for (int i = 0; i<n;++i){
            if (m.count(s[i]) == 0){
                total +=2;
                m[s[i]] = 1;
            }
            else{
                total+=1;
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}