#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string ins;
    int flag=0;
    cin >> ins;
	for(int i=0;i<ins.size();i++){
        if(ins[i]=='H'||ins[i]=='Q'||ins[i]=='9')
            flag = 1;
	}
	if(flag==1)
        cout << "YES";
    else
        cout << "NO";
}
