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
        int n;
        cin>>n;
        ll sum = 0;
        vector<int> v;
        for(int i = 0;i<n;++i){
            ll a;
            cin>>a;
            sum+=a;
            v.push_back(a);
        }
        int ret = 1;
        for(int i = 2;i<=(int)sqrt(sum)+1;++i){
            if(sum%i!=0){
                continue;
            }
            ll tmp  = 0;
            ll tmp1 = 0;
            for(int j = 0;j<n;++j){
                tmp += v[j];
                tmp1+=v[j];
                if(tmp % i == 0 && tmp!=sum){
                    tmp = 0;
                }
                if(tmp1%(sum/i)==0 && tmp1!=sum){
                    tmp1 = 0;
                }
            }
            if(tmp == 0){
                ret = max(ret,i);
            }
            if(tmp1 == 0){
                ret = max(ret,(int)sum/i);
            }
        }
        cout<<ret<<"\n";
    }
    return 0;
}