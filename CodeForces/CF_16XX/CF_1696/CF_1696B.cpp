#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int te = 0; te < t; te++)
    {
        int n;
        cin >> n;
        bool allzeros = true;
        bool caseone = true;
        int index=0;
        bool allzerosTwo = true;
        bool allzerosThree = false;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            
            if (a != 0 && allzeros)
            {
                allzeros = false;
                allzerosTwo = false;
            }
            if(!(allzerosTwo) && a==0){
                allzerosThree = true;
            }
            if (allzerosThree && a!=0){
                caseone = false;
            }

        }
        if (allzeros)
        {
            cout << 0 << "\n";
        }
        else if (caseone)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
}