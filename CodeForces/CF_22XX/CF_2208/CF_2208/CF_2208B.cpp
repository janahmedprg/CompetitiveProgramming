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
        int n,k,p,m;       
        cin>>n>>k>>p>>m;
        vector<pair<int,int>> deck(k);
        queue<pair<int,int>> buffer;
        int win = 0;

        for (int i = 0; i < n; ++i) {
            int cost;
            cin>>cost;
            int prio = cost;
            if (i + 1 == p) {
                win = cost;
                prio = -1000;
            }
            if (i < k) { 
                deck[i] = {prio, i};
            }
            if (i >= k) {
                buffer.push({prio, i});
            }
        }
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq(deck.begin(), deck.end());

        int count = 0;
        while (m > 0) {
            auto [card_cost, pick] = pq.top();
            pq.pop();
            if (pick + 1 == p) {
                m -= win;
                if (m < 0) {
                    break;
                }
                count += 1;
            }
            else {
                m -= card_cost;
            }
            buffer.push({card_cost, pick});
            pq.push(buffer.front());
            buffer.pop();
        }
        cout<<count<<"\n";

    }
    return 0;
}