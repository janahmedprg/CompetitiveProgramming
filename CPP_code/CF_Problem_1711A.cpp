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
        long long n;
        cin>> n;
        if(n == 1){
            cout<<1<<"\n";
        }
        else if(n == 3){
            cout<<"3 1 2"<<"\n";
        }
        else{
            cout<<"2 1 ";
            for(int i = 3; i<n;++i){
                cout<<i+1<<" ";
            }
            if(n>2){
                cout<<3<<"\n";
            }
            else{
                cout<<"\n";
            }
        }
    }
    return 0;
}