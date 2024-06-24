#include <bits/stdc++.h>
#define int long long int

using namespace std;
using ll = long long;

int32_t main()
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
        map<int, int> m1;
        queue<int> q;
        int prev = 0;
        for (int i = 0; i< n;++i){
            cin>> v[i]; 
            if (prev>v[i] || (m1.count(v[i]) == 1 && prev!=0)){
                while(!q.empty()){
                    m1[q.front()] = 1;
                    q.pop();
                }
            }
            q.push(v[i]);
            prev = v[i];
        }
        cout<<m1.size()<<"\n";        
    }
    return 0;
}