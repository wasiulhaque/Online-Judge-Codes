#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k,p,r,x;
        cin >> n >> k;

        if(n > k)
        {
            cout << k << endl;
            continue;
        }
        x = n - 1;
        p = k / x;
        r = k % x;

        if(r)
            cout <<  n * p + r << endl;

        else
            cout <<  n * p - 1 << endl;
    }

    return 0;
}
