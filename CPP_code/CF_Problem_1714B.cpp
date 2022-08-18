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
        long long n;
        cin>>n;
        map<long long,long long> m;
        vector<long long> v;
        long long ans = 0;
        for(long long i= 1;i<=n;++i){
            long long a;
            cin >> a;
            v.push_back(a); 
        }
        long long k = v.size();
        for(long long i = k-1;i>=0;--i){
            if(m.count(v[i]) == 0){
                m[v[i]] +=1;
            }
            else{
                ans = i+1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}