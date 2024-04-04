#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<bool> vis;
vector<vector<ll>> A;
ll total = 0;
stack<char> bal;
string s;

void dfs(int v){
    vis[v] = true;
    if(s[v] == '(' || s[v] == '{' || s[v] == '['){
        bal.push(s[v]); 
    }
    else{
        if(bal.empty()){
            return;
        }
        char tmp = bal.top();
        string opclos = "";
        opclos += tmp;
        opclos += s[v];
        if(opclos == "()" || opclos == "[]" || opclos == "{}"){
            bal.pop();
        }
        else{
            return;
        }
    }
    if(bal.empty()){
        total += 1;
    }
    for(int x : A[v]){
        if(vis[x] == false){
            dfs(x);
        }
    }
    if(s[v] == '(' || s[v] == '{' || s[v] == '['){
        bal.pop();
    }
    else{
        if(s[v] == ')'){
            bal.push('(');
        }
        else if (s[v] == '}'){
            bal.push('{');
        }
        else{
            bal.push('[');
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    cin>>s;
    A.resize(n);
    vis.resize(n);
    for(int i = 0; i<n-1; ++i){
        int x,y;
        cin>>x>>y;
        x-=1;
        y-=1;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n;++j) vis[j] = false;
        while(!bal.empty()) bal.pop();
        dfs(i);
    }
    cout<<total<<"\n";
    return 0;
}