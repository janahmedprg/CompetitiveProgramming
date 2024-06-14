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
        vector<int> v(n);
        int c= 1;
        for(int i = 0;i<n;++i){
            cin>>v[i]; 
        }
        sort(v.begin(),v.end());
        for(int i =0;i<n;++i){
            if(v[i]>i){
                while(v[i]>i){
                    i+=1;
                }
                c+=1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}