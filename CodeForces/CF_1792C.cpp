#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> v;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        cin>>n;
        v.clear();
        v.resize(n+1);
        for(int i = 0; i<n;++i){
            int a;
            cin>>a;
            v[a] = i;
        }
        int l = (n+1)/2;
        int r = (n+2)/2;
        if(v[l]>v[r]){
            cout<<l<<"\n";
            continue;
        }
        while(true){
            if(l==1){
                break;
            }
            if(v[l]>v[l-1] && v[r]<v[r+1]){
                l-=1;
                r+=1;
            }
            else{
                break;
            }
        }
        cout<<l-1<<"\n";
    }
    return 0;
}