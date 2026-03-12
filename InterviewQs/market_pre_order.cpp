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
        set<int> prices;
        unordered_map<int,int> buy_orders;
        unordered_map<int,int> sell_orders;

        cin>>n;
        for (int i = 0; i<n; ++i){
            int t, p, a;
            cin>>t>>p>>a;
            prices.insert(p);
            if (t == 0) {
                buy_orders[p] += a;
            }
            else {
                sell_orders[p] += a;
            }
        }

        cout<<"BUY ORDERS\n";
        for (const auto& [k,v] : buy_orders){
            cout<<k<<" "<<v<<"\n";
        }

        cout<<"SELL ORDERS\n";
        for (const auto& [k,v] : sell_orders) {
            cout<<k<<" "<<v<<"\n";
        }


        unordered_map<int,int> price_to_idx(prices.size());
        int idx = 0;
        for (const auto& p : prices) {
            price_to_idx[p] = idx;
            idx += 1;
        }

        int m = prices.size();

        vector<int> buy_orders_arr(m, 0);
        vector<int> sell_orders_arr(m, 0);

        for (const auto& p : prices) {
            idx = price_to_idx[p];
            buy_orders_arr[idx] = buy_orders[p];
            sell_orders_arr[idx] = sell_orders[p];
        }

        vector<int> buy_cum(m,0);
        vector<int> sell_cum(m,0);

        buy_cum[m-1] = buy_orders_arr[m-1];
        for (int i = m-2; i>=0; --i) {
            buy_cum[i] = buy_cum[i+1] + buy_orders_arr[i];
        }

        sell_cum[0] = sell_orders_arr[0];
        for (int i = 1; i<m; ++i) {
            sell_cum[i] = sell_cum[i-1] + sell_orders_arr[i];
        }

        int max_exec_vol = -1;
        int best_imbl = 0;
        int auction_price = 0;
        for (const auto& p : prices) {
            idx = price_to_idx[p];

            int exec_vol = min(buy_cum[idx], sell_cum[idx]);
            int imbl = abs(buy_cum[idx] - sell_cum[idx]);

            if (exec_vol > max_exec_vol || (exec_vol == max_exec_vol && imbl < best_imbl)) {
                max_exec_vol = exec_vol;
                best_imbl = imbl;
                auction_price = p;
            }
        }

        if (max_exec_vol == 0) {
            cout<<"RETURN 0 0 0\n";
            cout<<"---------------------------------------------------------------\n";
            continue;
        }

        cout<<"RETURN "<<auction_price<<" "<<max_exec_vol<<" "<<best_imbl<<"\n";
        cout<<"---------------------------------------------------------------\n";
    }
    return 0;
}