#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, div, step;
    cin >> x;
    div = x/5;
    if(x%5==0)
        step=div;
    else
        step=div+1;
    cout << step;
}
