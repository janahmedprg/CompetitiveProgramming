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
        vector<char> v;
        v.resize(3);
        long long n = s.size();
        if(n>3){
            long long count = 1;
            v[0] = s[0];
            v[1] = '0';
            v[2] = '0';
            for(int i = 1; i<n;++i){
                if(s[i]!=v[0]){
                    if(v[1] == '0') {
                        v[1] = s[i];
                    }
                    else if(s[i]!=v[1]){
                        if(v[2] == '0'){
                            v[2] = s[i];
                        }
                        else if(s[i]!=v[2]){
                            count +=1;
                            v[0] = s[i];
                            v[1] = '0';
                            v[2] = '0';            
                        }
                    }
                } 
            }
            cout<<count<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
    return 0;
}