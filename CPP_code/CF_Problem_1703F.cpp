#include <bits/stdc++.h>

using namespace std;

int countGreater(vector<long long> arr, long long n, long long k)
{
    long long l = 0;
    long long r = n - 1;
    long long leftGreater = n;
    while (l <= r) {
        long long m = l + (r - l) / 2;
        if (arr[m] >= k) {
            leftGreater = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return (n-leftGreater);
}

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
        vector<long long> v;
        long long count = 0;
        for(long long i = 1;i<=n;++i){
            long long a;
            cin>>a;
            if(a<i){
                long long k = v.size();
                count+=k-countGreater(v,k,a);
                v.push_back(i);
            }
        } 
        cout<<count<<"\n";
    }
    return 0;
}