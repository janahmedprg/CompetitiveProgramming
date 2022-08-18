#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        int n,h,m;
        cin>>n>>h>>m;
        bool flag = false;
        int minSleepH = 25;
        int minSleepM = 61;
        for(int i = 0; i<n;++i){
            int hi,mi;
            cin>>hi>>mi;
            if(hi == h && mi== m){
                minSleepH = 0;
                minSleepM =0;
            } 
            int hans,mans;
            mans=mi-m;
            if(mans<0){
                mans = 60+mans;
                hi-=1; 
            }
            hans = hi-h;
            if(hans<0){
                hans = 24 + hans;
            }
            if(hans<minSleepH){
                minSleepH = hans;
                minSleepM = mans;
            }
            else if(hans==minSleepH){
                if(minSleepM>mans){
                    minSleepM = mans;
                }
            }
        }
        cout<<minSleepH<<" "<<minSleepM<<"\n";
    }
    return 0;
}