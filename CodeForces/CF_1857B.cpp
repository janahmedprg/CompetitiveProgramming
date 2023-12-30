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
        string n;
        cin>>n;
        int k = n.size();
        int idx = -1;
        for (int i = 0;i<k; ++i){
            if((int)n[i]-48 >= 5){
                idx = i;
                break;
            }
        }
        while(idx>0){
            if((int)n[idx]-48 >= 5){
                n[idx-1]+=1;
            }
            else{
                break;
            }
            idx -= 1;
        }
        if(idx == 0){
            if((int)n[0] -48 >= 5){
                cout<<1;
                for(int i = 0; i<k; ++i){
                    cout<<0;
                }
                cout<<"\n";
            }
            else{
                cout<<n[0];
                for(int i =1;i<k;++i){
                    cout<<0;
                }
                cout<<"\n";
            }
        }
        else if (idx!=-1){
            for(int i = 0; i<=idx; ++i){
                cout<<n[i];
            }
            for(int i = idx+1;i<k; ++i){
                cout<<0;
            }
            cout<<"\n";
        }
        else{
            cout<<n<<"\n";
        }
    }
    return 0;
}