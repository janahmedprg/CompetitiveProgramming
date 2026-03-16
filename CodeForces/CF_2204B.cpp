#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

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
       vector<pair<int,int>> v(n);
       for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        v[i] = {x,i};
       }
       priority_queue<pair<int, int>> pq(v.begin(), v.end());

       int count = 0;
       int currIdx = pq.size();
       while (pq.size() > 0){
        pair<int,int> pqtop = pq.top();
        pq.pop();
        if (pqtop.second < currIdx){
            currIdx = pqtop.second;
            count += 1;
        }
        if (currIdx == 0){
            break;
        }
       }
       cout<<count<<"\n";
    }
    return 0;
}