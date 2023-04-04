#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n)
{
vector<int> lp(n+1);
vector<int> pr;

for (int i=2; i <= n; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= n; ++j) {
        lp[i * pr[j]] = pr[j];
        if (pr[j] == lp[i]) {
            break;
        }
    }

}

    return pr;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;++i){
        int a;
        cin>>a;
        vector<int> primes = sieve(a);
        map<int,int> m;
        vector<pair<int,int>> rep;
        for(int j = 0; j<primes.size();++j){
            m[primes[j]] = 1;
            if(m.count(a-primes[j]) != 0){
                rep.push_back({a-primes[j],primes[j]});
            }
        }
        sort(rep.begin(),rep.end());
        cout<< a<<" has "<< rep.size() << " representation(s)\n";
        for(auto x:rep){
            cout<<x.first<<"+"<<x.second<<"\n";
        }
        cout<<endl;
    }
}