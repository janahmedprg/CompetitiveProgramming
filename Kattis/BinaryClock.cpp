#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int h1 = (int)s[0]-48;
    int h2 = (int)s[1]-48;
    int m1 = (int)s[2]-48;
    int m2 = (int)s[3]-48;
    vector<vector<char>> v(4,vector<char>(4));
    for(int i =3;i>=0;--i){
        if(h1%2==0){
            v[i][0] = '.';
        }
        else{
            v[i][0] = '*';
        }
        h1 /=2;
    }
    for(int i =3;i>=0;--i){
        if(h2%2==0){
            v[i][1] = '.';
        }
        else{
            v[i][1] = '*';
        }
        h2 /=2;
    }
    for(int i =3;i>=0;--i){
        if(m1%2==0){
            v[i][2] = '.';
        }
        else{
            v[i][2] = '*';
        }
        m1 /=2;
    }
    for(int i =3;i>=0;--i){
        if(m2%2==0){
            v[i][3] = '.';
        }
        else{
            v[i][3] = '*';
        }
        m2 /=2;
    }
    for(int i = 0;i<4;++i){
        for(int j =0;j<4;++j){
            if(j == 1){
                cout<<" "<<v[i][j];
            }
            else if(j==2){
                cout<<"   "<<v[i][j];
            }
            else if(j == 3){
                cout<< " "<<v[i][j];
            }
            else{
                cout<<v[i][j];
            }
        }
        cout<<"\n";
    }
    
}