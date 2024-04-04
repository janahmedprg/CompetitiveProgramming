#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void gaussElim(vector<vector<double>> *A){
    for( ll row=0; row<(*A).size(); ++row){
        for (ll i = 0; i< (*A).size(); ++i){
            if((row == i) || (*A)[row][row] == 0){
                continue;
            }
            for(ll j = row; j<(*A)[i].size(); ++j){
                
                (*A)[i][j] -= (*A)[row][j]*(*A)[i][j]/(*A)[row][row];
            }
        }
    }
}

int main()
{
    vector<vector<double>> A = {{1.0,-0.45,-0.45,-10.0}, {0.9,-1.0,0.0,-5.0}, {0.9,0.0,-1.0,-5.0}};
    gaussElim(&A);
    for(auto x:A){
        cout<<"[";
        for(ll y: x){
            cout<<y<<", ";
        }
        cout<<"]\n";
    }
}