#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i, len;
    cin>>a;
    len = a.size();
    for (i=len; i>=0; i--)
    {
        if (a[i]==a[i+1])
        {
            a.erase(i,2);
        }
    }
    cout<<a;
}