#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        ll L, R, i;
        cin >> L >> R;
        int result=0, dig;
        for(i=L;i<=R;i++){
            dig = i % 10;
            if(dig == 2 || dig == 3 || dig == 9)
                result++;
        }
        cout << result << endl;
    }

}
