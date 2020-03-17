#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int flag=0;
    cin >> a;
    cin >> b;
    if(a.size()!=b.size())
    {
        cout << "NO" <<endl;
        return 0;
    }
    int l = a.size()-1;

    for(int i=0;i<a.size();i++,l--){
        if(a[i]==b[l]){
            flag++;
        }
    }
    if(flag==a.size())
        cout<< "YES" <<endl;
    else
        cout << "NO" <<endl;
    return 0;
}
