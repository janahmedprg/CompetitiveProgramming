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
 
vector<bool> visited;
vector<vector<int> > graph;
vector<long long> cost;
 
 
 
int dfs(int node, long long mi) {
    visited[node] = true;
    if(mi>=cost[node]){
        mi = cost[node];
    }
    for (auto neighbour: graph[node]) {
        if (!visited[neighbour]) {
            mi = dfs(neighbour, mi);
        }
    } 
    return mi;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    visited.resize(n,false);
    graph.resize(n);
    for(int i=0;i<n;++i){
        long long c;
        cin>>c;
        cost.push_back(c);
    }
    for(long long i = 0; i<m;++i){
        int a,b;
        cin>>a>>b;
        a-=1;
        b-=1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int i = 0;
    long long sum = 0;
    while(i<n){
        if(!visited[i]){
            long long mi = cost[i];
            sum += dfs(i,mi);
        }
        i+=1;
    }
    cout<<sum<<"\n";
    return 0;
}