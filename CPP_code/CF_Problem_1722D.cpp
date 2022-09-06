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
        string s;
        cin>>s;
        if(n ==1){
            cout<<0<<"\n";
            continue;
        } 
        vector<long long> v;
        long long sum=0;
        for(long long i =0;i<n;++i){
            if(s[i]=='L'){
                sum += i;
            }
            else{
                sum += n-i-1;
            }
        }
        long long idx = 0;
        for(long long j = 0;j<n/2;++j){
            if(s[j] == 'L'){
                s[j] = 'R';
                sum -=j;
                sum +=n-j-1;
                cout<<sum<<" ";
                idx+=1;
            }
            if(s[n-j-1] == 'R'){
                s[n-j-1] ='L';
                sum -= j;
                sum += n-j-1;
                cout<<sum<<" ";
                idx+=1;
            }
        } 
        for(long long i = idx;i<n;++i){
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
    return 0;
}