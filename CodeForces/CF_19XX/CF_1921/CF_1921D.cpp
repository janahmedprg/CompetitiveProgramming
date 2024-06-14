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
        ll n,m;
        cin>> n>>m;
        vector<ll> vn(n);
        vector<ll> vm(m);
        for (int i = 0; i<n; ++i){
            cin>>vn[i];
        }
        for (int i = 0; i<m; ++i){
            cin>>vm[i];
        }
        sort(vn.begin(),vn.end());
        sort(vm.rbegin(), vm.rend());

        // for(auto x: vn){
        //     cout<< x<<" ";
        // }
        // cout<<"\n";
        // for(auto x:vm){
        //     cout<<x<<" ";
        // }
        // cout<<'\n';

        ll D = 0;
        ll b = 0;
        ll e = n-1;
        ll bm = 0;
        ll em = m-1;

        while(true){
            if (b ==e ){
                D+= max(abs(vn[e] - vm[em]), abs(vn[e] - vm[bm]));
                break;
            }
            else{
                ll maE = max(abs(vn[e] - vm[em]), abs(vn[e] - vm[bm]));
                ll maB = max(abs(vn[b] - vm[em]), abs(vn[b] - vm[bm]));
                if (maE > maB){
                    D+=max(abs(vn[e] - vm[em]), abs(vn[e] - vm[bm]));
                    if(abs(vn[e] - vm[em])>abs(vn[e] - vm[bm])){
                        em-=1;
                    }
                    else{
                        bm +=1;
                    }
                    e-=1;
                }
                else{
                    D+=max(abs(vn[b] - vm[em]), abs(vn[b] - vm[bm]));
                    if(abs(vn[b] - vm[em])>abs(vn[b] - vm[bm])){
                        em-=1;
                    }
                    else{
                        bm +=1;
                    }
                    b += 1;
                }
            }
        }


        cout<<D<<"\n";
    }
    return 0;
}