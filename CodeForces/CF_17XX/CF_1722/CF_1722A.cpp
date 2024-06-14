#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> tim;
    tim.push_back((int)'T');
    tim.push_back((int)'i');
    tim.push_back((int)'m');
    tim.push_back((int)'u');
    tim.push_back((int)'r');
    sort(tim.begin(),tim.end());
    for(int te = 0; te<t;te++){
        int n;
        string s;
        cin>>n>>s;
        vector<int> v;
        bool flag = false;
        if(n!=5){
            cout<<"NO"<<"\n";
            continue;
        } 
        for(int i = 0;i<n;++i){
            v.push_back((int)s[i]);
        }
        sort(v.begin(),v.end());
        for(int i = 0;i<5;++i){
            if(v[i]!=tim[i]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
        

    }
    return 0;
}