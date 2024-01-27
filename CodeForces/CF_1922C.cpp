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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0;i<n; ++i){
            cin>>v[i];
        }
        ll m;
        cin>>m;
        vector<ll> forward;
        vector<ll> backward;
        if(n>2){
            for(int i = 0; i<n; ++i){
                if(i == 0){
                    forward.push_back(0);
                }
                else if (i == 1){
                    forward.push_back(1);
                }
                else{
                    if(v[i - 1] -v[i - 2] > v[i] - v[i - 1]){
                        forward.push_back(forward[i-1] + 1);
                    }
                    else{
                        forward.push_back(forward[i-1] + v[i] - v[i-1]);
                    }
                }
            }
            for(int i = n-1; i>=0; --i){
                if(i == n-1){
                    backward.push_back(0);
                }
                else if (i == n-2){
                    backward.push_back(1);
                }
                else{
                    if(v[i + 2] -v[i + 1] > v[i+1] - v[i]){
                        backward.push_back(backward[n-i-2] + 1);
                    }
                    else{
                        backward.push_back(backward[n-i-2] + v[i+1] - v[i]);
                    }
                }
            }
        }
        for(int i = 0; i<m; ++i){
            ll l,r;
            cin>>l>>r;
            if(l<r){
                if(n>2){
                    cout<<forward[r-1] - forward[l-1]<<"\n";
                }
                else{
                    cout<<1<<"\n";
                }
            }
            else if (l>r){
                if(n>2){
                    cout<<backward[n-r] - backward[n-l]<<"\n";
                }
                else{
                    cout<<1<<"\n";
                }
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}