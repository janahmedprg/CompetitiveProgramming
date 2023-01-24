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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int alice = 0;
        int bob = 0;
        alice +=a;
        bob +=a;
        if (a==0){
            cout<<1<<"\n";
            continue;
        }
        int rounds = a; 
        if(b>c){
            int diff = b-c;
            rounds += 2*c;
            if(bob-diff<0){
                rounds += bob + 1;
                cout<<rounds<<"\n";
                continue;
            }
            else{
                rounds += diff;
                bob -= diff;
                if(bob>=d){
                    rounds +=d;
                }
                else{
                    rounds += bob+1;
                }
                cout<<rounds<<"\n";
            }
        }
        else if (c>b){
            int diff = c-b;
            rounds += 2*b;
            if(bob-diff<0){
                rounds += bob + 1;
                cout<<rounds<<"\n";
                continue;
            }
            else{
                rounds += diff;
                bob -= diff;
                if(bob>=d){
                    rounds +=d;
                }
                else{
                    rounds += bob+1;
                }
                cout<<rounds<<"\n";
            }
        }
        else{
            rounds += 2*c;
            if(alice>=d){
                rounds += d;
            }
            else{
                rounds += alice+1;
            }
            cout<<rounds <<"\n";
        }
    }
    return 0;
}