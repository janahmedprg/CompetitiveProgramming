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
        ll h,w,xa,ya,xb,yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        ll dx = xb-xa;
        ll dy = yb-ya;
        if(dx<=0){
            cout<<"Draw\n";
        }
        else{
            if(dx%2 == 1){
                if(abs(dy)<=1){
                    cout<<"Alice\n";
                }
                else{
                    if(dy<0){
                        if(ya-(dx-1)/2<=2){
                            cout<<"Alice\n";
                        }
                        else{
                            cout<<"Draw\n";
                        }
                    }
                    else{
                        if((dx-1)/2+ya>=w-1){
                            cout<<"Alice\n";
                        }
                        else{
                            cout<<"Draw\n";
                        }
                    }
                }
            }
            else{
                if(abs(dy)<=0){
                    cout<<"Bob\n";
                }
                else{
                    if(dy<0){
                        if((dx)/2+yb>=w){
                            cout<<"Bob\n";
                        }
                        else{
                            cout<<"Draw\n";
                        }
                    }
                    else{
                        if(yb-(dx)/2<=1){
                            cout<<"Bob\n";
                        }
                        else{
                            cout<<"Draw\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}