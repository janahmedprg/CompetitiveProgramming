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
        vector<ll> q;
        ll a;
        cin>>a;
        cout<<1;
        q.push_back(a);
        bool flag = false;
        ll j = 0;
        for (int i = 1; i<n;++i){
            cin>>a;
            if(a>=q[j] && flag == false){
                cout<<1;
                q.push_back(a);
                j+=1;
            }
            else if(a>=q[j] && flag == true){
                if(a<=q[0]){
                    cout<<1;
                    q.push_back(a);
                    j+=1;
                }
                else{
                    cout<<0;
                }
            }
            else{
                if (flag == false){
                    if(a<=q[0]){
                        flag = true;
                        j += 1;
                        q.push_back(a);
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<"\n";

    }
    return 0;
}