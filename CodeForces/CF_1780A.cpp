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
        int n;
        cin>>n;
        int c = 0;
        vector<int> odds;
        vector<int> evens;
        for(int i = 0;i<n;++i){
            int a;
            cin>>a;
            if( a%2 ==1 ){
                odds.push_back(i+1);
            }
            else{
                evens.push_back(i+1);
            }
        }
        int k = evens.size();
        int l = odds.size();
        if(k==n){
            cout<<"NO\n";
        }
        else if (l==n){
            cout<<"YES\n";
            cout<<1<<" "<<2<<" "<<3<<"\n";
        }
        else if(l == 2 && k ==1){
            cout<<"NO\n";
        }
        else{
            if(l == 1 || l == 2){
                cout<<"YES\n";
                cout<<odds[0]<<" "<<evens[0]<<" "<<evens[1]<<"\n";
            }
            else{
                cout<<"YES\n";
                cout<<odds[0]<<" "<<odds[1]<<" "<<odds[2]<<"\n";
            }
        }

    }
    return 0;
}