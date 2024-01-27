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
        int n,k,m;
        string s;
        cin>>n>>k>>m>>s;
        vector<int> alph(k,0);
        int counter = 0;
        int tracker = 0;
        string res="";
        for(int i = 0; i<m;++i){
            if(alph[s[i]-97] == 0){
                counter += 1;
                alph[s[i] - 97] += 1;
            }
            if(counter == k){
                res += s[i];
                tracker += 1;
                fill(alph.begin(), alph.end(), 0);
                counter = 0;
            }
        }
        if(n <= tracker){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
            cout<<res;
            for(int i = 0; i<k; ++i){
                if(alph[i] == 0){
                    char c = i + 97;
                    cout<<c;
                    break;
                }
            }
            for(int i = 0; i<n-tracker-1;++i){
                cout<<"a";
            }
            cout<<"\n";
        }
    }
    return 0;
}