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
        long long p;
        cin>>s>>p;
        vector<pair<int,long long>> v;
        long long n=s.size();
        long long ts = 0;
        for(int i= 0;i<n;++i){
            pair<int,long long> x;
            x.first = (int)s[i]-96;
            ts += x.first;
            x.second = i;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long deleted = 0;
        for(int i = 0;i<n;++i){
            if(p>=ts){
                break;
            }
            ts-=v[n-i-1].first;
            s[v[n-i-1].second] = '0';
        }
        for(long long i=0;i<n;++i){
            if(s[i]!='0'){
                cout<<s[i];
            }
        }
        cout<<"\n";
        
    }
    return 0;
}