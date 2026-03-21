#include <bits/stdc++.h>
#define int long long int
#define read_vector(vec, n) vector<int> vec(n); for(int i = 0; i < n; ++i) cin >> vec[i];

using namespace std;
using ll = long long;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int id = 1;
        int output;
        bool flag = false;
        for (int i = 0; i < n-1; ++i){
            cout<<"? "<<id<< " "<< id+1<<"\n";
            cout.flush();
            cin>>output;
            if (output == 1){
                cout<< "! "<<id<<"\n";
                cout.flush();
                flag = true;
                break;
            }
            id += 2;
        }
        if (!flag) {
            cout<<"? "<<1<< " "<< 2*n - 1<<"\n";
            cout.flush();
            cin>>output;
            if (output == 1) {
                cout<< "! "<<1<<"\n";
                cout.flush();
                continue;
            }
            cout<<"? "<<2<< " "<< 2*n - 1<<"\n";
            cout.flush();
            cin>>output;
            if (output == 1) {
                cout<< "! "<<2<<"\n";
                cout.flush();
            }
            else{
                cout<< "! "<<2*n<<"\n";
                cout.flush();
            }

        }

        
    }
    return 0;
}