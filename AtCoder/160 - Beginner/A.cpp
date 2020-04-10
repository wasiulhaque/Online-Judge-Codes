#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int flag = 0;
    if(S[2]==S[3] && S[4]==S[5])
        flag = 1;
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
