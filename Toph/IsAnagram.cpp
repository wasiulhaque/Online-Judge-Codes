#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.compare(b)==0)
        cout << "Yes";
    else
        cout << "No";
}

