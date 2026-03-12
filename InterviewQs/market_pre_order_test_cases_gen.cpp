#include <bits/stdc++.h>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> n(1, 1000);
    // uniform_int_distribution<> n_large(1000000, 10000000);
    uniform_int_distribution<> t(0, 1);
    uniform_int_distribution<> p(1, 100);
    // uniform_int_distribution<> p_large(100000, 1000000);
    uniform_int_distribution<> a(1, 100);
    // uniform_int_distribution<> a_large(100000, 1000000);

    cout<<100<<"\n";

    for (int i = 0; i<100; ++i) {
        int num = n(gen);
        cout<<num<<"\n";
        for (int j = 0; j<num; ++j) {
            cout<<t(gen)<<" "<<p(gen)<<" "<<a(gen)<<"\n";
        }
    }
    // for (int i = 0; i<100; ++i) {
    //     int num = n_large(gen);
    //     cout<<num<<"\n";
    //     for (int j = 0; j<num; ++j) {
    //         cout<<t(gen)<<" "<<p_large(gen)<<" "<<a_large(gen)<<"\n";
    //     }
    // }

}