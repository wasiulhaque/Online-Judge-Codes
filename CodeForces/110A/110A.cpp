#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string n;
    int flag=1;
    int counter=0;
    cin >> n;
    for(int i=0;i<n.size();i++){
        if(n[i]=='4'||n[i]=='7')
            counter++;
    }
    //cout << counter <<endl;
    stringstream ss;
    ss << counter;
    string check = ss.str();
//    cout << check << endl;
    for(int i=0;i<check.size();i++){
        if(check[i]!='4'&&check[i]!='7')
            flag=0;
    }

    if(flag==1)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
}
