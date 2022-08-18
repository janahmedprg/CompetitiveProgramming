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
        cin>>n;
        vector<long long> v;
        long long max = 0;
        bool flag = false;
        for(int i = 0; i<n;++i){
            long long a;
            cin>>a;
            if(a%10 == 5 || a %10 == 0){
                flag = true;
            }
            if(max<a){
                max = a;
            }
            v.push_back(a);
        }
        bool done = true;
        if(flag){
            if(max%10 == 5){
                max += 5;
            }
            for(int i =0;i<n;++i){
                if(v[i]%10!=0 && v[i]%10 != 5){
                    cout<<"NO"<<"\n";
                    done = false;
                    break;
                }
                if(v[i]%10 == 5){
                    v[i] +=5;
                }
                if(v[i] != max){
                    cout<<"NO"<<"\n";
                    done =false;
                    break;
                }
            }
        }
        else{
            long long a = v[0];
            while(a%10!=2){
                a+= a%10;
            }
            for(int i= 1; i<n-1;++i){ 
                while(v[i]%10!=2){
                    v[i] += v[i]%10;
                }
                if(v[i]%20!=a%20){
                    cout<<"NO"<<"\n";
                    done = false;
                    break;
                }
                if(!done){
                    break;
                }
            } 
        }
        if(done){
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}