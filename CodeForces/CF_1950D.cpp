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
        ll n;
        cin>>n;
        vector<int> v;
        unordered_map<int,int> m;
        for (int i = 2; i<33; ++i){
            v.push_back(stoi(bitset<8>(i).to_string()));
            m[stoi(bitset<8>(i).to_string())] = 1;
        }
        while(n!=1){
            ll tmp = n;
            if(m[n] == 1){
                n = 1;
                break;
            }
            else{
                for(int i = 0; i<v.size(); ++i){
                    if(n % v[i] == 0){
                        n /= v[i];
                    }
                }
            }
            if(tmp == n){
                break;
            }
        }
        if(n == 1 || n == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}