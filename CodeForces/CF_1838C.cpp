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
        int n,m;
        cin>>n>>m;
        int count = 1;
        vector<vector<int>> v(n,vector<int>(m));
        for (int i = 0; i< n; ++i){
            for(int j = 0; j<m;++j){
                v[i][j] = count;
                count+=1;
            }
        }
        if(n%2==0){
            for(int i = n-1;i>=0; i-=2){
                for(int j = 0;j<m;++j){
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
            for(int i = 0; i<0;i-=2){
                for (int j =0;j<m;++j){
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";    
        }
        else{
            for(int i = n-2;i>=0; i-=2){
                for(int j = 0;j<m;++j){
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
            for(int i = n-1; i>=0;i-=2){
                for (int j =0;j<m;++j){
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }
   }
    return 0;
}