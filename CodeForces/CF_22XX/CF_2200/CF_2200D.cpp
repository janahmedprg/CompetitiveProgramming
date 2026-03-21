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
        int n, x, y;
        cin>>n>>x>>y;
        vector<int> outer;
        vector<int> inner;

        int mi_inner = 10000000;
        int idx = 0;
        for (int i = 0; i<n; ++i){
            int k;
            cin>>k;
            if (i<x || i >= y){
                outer.push_back(k);
            }
            else {
                if (mi_inner > k){
                    mi_inner = k;
                    idx = i - x;
                }
                inner.push_back(k);
            }

        }

        // cout<<"outer\n";
        // for(int x: outer){
        //     cout<<x<<" ";
        // }
        // cout<<"\ninner\n";
        // for(int a : inner){
        //     cout<<a<<" ";
        // }
        // cout<<"\nidx "<<idx<<"\n";
        // cout<<"mi_inner "<<mi_inner<<"\n";

        if(outer.size()==0 || mi_inner < outer[0]){
            for (int i = idx; i < inner.size(); ++i){
                cout<<inner[i]<<" ";
            }
            for(int i = 0; i<idx; ++i){
                cout<<inner[i]<<" ";
            }
            for(int i = 0;i<outer.size(); ++i){
                cout<<outer[i]<<" ";
            }
        }
        else{
            int breakp = outer.size();
            for(int i = 0;i<outer.size(); ++i){
                if (outer[i] > mi_inner){
                    breakp = i;
                    break;
                }
                cout<<outer[i]<<" ";
            }
            for (int i = idx; i < inner.size(); ++i){
                cout<<inner[i]<<" ";
            }
            for(int i = 0; i<idx; ++i){
                cout<<inner[i]<<" ";
            }
            for (int i = breakp; i<outer.size(); ++i){
                cout<<outer[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}