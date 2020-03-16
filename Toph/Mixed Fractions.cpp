#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x,y,z;
    cin >> a >> b;
    x = a/b;
    z = b;
    y = a - x*z;
    cout << x << " " << y << " " << z;
}


