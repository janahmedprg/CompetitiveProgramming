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
 
long long cost(vector<long long> v,long long k){
    long long n = v.size();
    long long sum = 0;
    for(long long i = 0; i<n; ++i){
        v[i]= v[i] + (i+1)*k;
    }
    sort(v.begin(),v.end());
    for(long long i = 0; i<k; ++i){
        sum+=v[i];
    }
    return sum;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,S;
    cin>>n>>S;
    vector<long long> v;
    for(long long i = 0; i<n;++i){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    long long l = 0;
    long long r = n;
    while(l<=r){
       long long mid = l+(r-l)/2;
       if(cost(v,mid)<=S){
        l = mid + 1;
       } 
       else{
        r = mid-1;
       }
    }
    cout<<l-1<<" "<<cost(v,l-1);
    return 0;
}