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

bool compare(long long a, long long b)
{
    return (a > b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, d;
    cin >> n >> d;
    vector<long long> v;
    for (long long i = 0; i < n; ++i)
    {
        long long a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), compare);
    long long count = 0;
    long long idx = 0;
    for (long long i = 0; i < n; ++i)
    {
        if (d >= v[i])
        {
            long long nAdd = (d - v[i]) / v[i] + 1;
            idx += nAdd + 1;
        }
        else
        {
            idx += 1;
        }
        if (idx <= n)
        {
            count += 1;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";
    return 0;
}