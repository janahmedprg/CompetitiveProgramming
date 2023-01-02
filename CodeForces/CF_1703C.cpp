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
        int n;
        vector<int> seq;
        cin>>n;
        for(int i=0;i<n;++i){
            int a;
            cin>>a;
            seq.push_back(a);
        }
        for(int i=0;i<n;++i){
            int k;
            cin>>k;
            string s;
            cin>>s;
            for(int j=0;j<k;++j){
                if(s[j] == 'D'){
                    seq[i] = ((seq[i] +1) + 10)%10;
                }
                else{
                    seq[i] = ((seq[i] -1) + 10)%10;
                }
            }
        }
        for(int i=0;i<n;++i){
            cout<<seq[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}