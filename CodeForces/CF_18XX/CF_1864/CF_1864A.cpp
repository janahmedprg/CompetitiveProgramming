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
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> v(n);
        int c = 0;
        bool flag = false;
        for(int i = 0; i<n-1; ++i){
            y=y-c;
            if(y<=x){
                flag = true;
                break;
            }
            v[n-1-i] = y;
            c+=1;
        }
        if(flag){
            cout<<-1<<"\n";
        }
        else{
            v[0] = x;
            if(v[1] - v[0]>v[2]-v[1]){
                for(int i = 0;i<n;++i){
                    cout<<v[i]<<" ";
                }
                cout<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }
    return 0;
}