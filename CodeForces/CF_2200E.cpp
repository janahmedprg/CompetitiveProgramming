#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

using namespace std;
using ll = long long;

int lowest_factor(int i){
    for (int j = 2; j*j<=i + 1; ++j){
        if (i % j == 0){
            return j;
        }
    }
    return i;
}

int highest_factor(int i) {
    int ma = i;

    while (i % 2 == 0){
        ma = 2;
        i /= 2;
    }
    for (int j = 3; j * j <= i; j += 2){
        while (i % j == 0){
            ma = j;
            i /= j;
        }
    }
    if (i > 2){
        ma = i;
    }
    return ma;
}




int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        bool flag = false;
        int prev = -1;
        vector<int> a(n);
        for (int i = 0; i<n; ++i){
            cin>>a[i];
            if (prev > a[i]){
                flag = true;
            }
            prev = a[i];
        }
        if (flag == false){
            cout<<"Bob\n";
            continue;
        }

        prev = -1;
        int alice = -1;
        int bob =-1;
        flag = false;
        for (int i = 0; i<n; ++i){
            alice = lowest_factor(a[i]);
            bob = highest_factor(a[i]);
            if (alice<bob || alice < prev) {
                cout<<"Alice\n";
                flag = true;
                break;
            }
            prev = alice;
        }
        if(flag == false){
            cout<<"Bob\n";
        }
    }
    return 0;
}