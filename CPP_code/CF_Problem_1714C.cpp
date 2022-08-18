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
        vector<int> v;
        int s;
        cin>>s;
        if(s/10 == 0){
            cout<<s<<"\n";
            continue;
        } 
        for(int i = 9; i>0;--i){
            v.push_back(i);
            s -=i;
            if(s/10 == 0 && s<i){
                v.push_back(s);
                break;
            }
        }
        int k = v.size();
        for(int i = k-1;i>=0;--i){
            cout<<v[i];
        }
        cout<<"\n";
    }
    return 0;
}