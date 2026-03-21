#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

using namespace std;
using ll = long long;

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
        read_vector(a,n);   
        for (int i = 0; i<n; ++i){
            int curr = a[i];
            int countLarger = 0;
            int countSmaller = 0;
            for (int j = i; j<n; ++j){
                if (curr < a[j]){
                    countLarger += 1;
                }
                else if (curr>a[j]){
                    countSmaller += 1;
                }
            }
            cout<< max(countSmaller, countLarger)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}