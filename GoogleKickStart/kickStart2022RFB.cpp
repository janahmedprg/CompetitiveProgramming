#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;
using ll = long long;

vector<bool> visited;
vector< vector < ll> > v;
vector<ll> lvl;

void dfs(ll node, ll level){
    visited[node] = true;
    lvl[level] += 1;
    for(auto neighbour: v[node]){
        if(!visited[neighbour]){
            dfs(neighbour,level + 1);
        }
    }
    return; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        visited.clear();
        v.clear();
        lvl.clear();
        ll n;
        ll q;
        cin>>n>>q;
        v.resize(n+1);
        lvl.resize(n+1);
        for(ll i = 0;i<n-1;++i){
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(ll i = 0; i<q; ++i){
            ll x;
            cin>>x;
        }
        visited.resize(n+1,false);
        dfs(1,0);
        ll y = lvl.size();
        ll res = 0;
        for(ll i = 0; i<y;++i){
            q-=lvl[i];
            if(q<0){
                break;
            }
            else{
                res+=lvl[i];
            }
        }
        cout << "Case #" << te + 1 << ": " << res << "\n";

    }
    return 0;
}