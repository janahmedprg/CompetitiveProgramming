#include <bits/stdc++.h>

using namespace std;
using ll = long long;



void dfs_solve(vector<vector<double>> *A){

}

int main()
{
    vector<vector<double>> A = {{1.0,-0.45,-0.45,-10.0}, {0.9,-1.0,0.0,-5.0}, {0.9,0.0,-1.0,-5.0}};
    dfs_solve(&A);
    for(auto x:A){
        cout<<"[";
        for(ll y: x){
            cout<<y<<", ";
        }
        cout<<"]\n";
    }
}