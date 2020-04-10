#include<bits/stdc++.h>
using namespace std;
int main()
{
   string n;
   cin >> n;
   if(n[n.size()-1]=='0' || n[n.size()-1]=='2' || n[n.size()-1]=='4' || n[n.size()-1]=='6' || n[n.size()-1]=='8')
    cout << 0 << endl;
   else
    cout << 1 << endl;
 
}