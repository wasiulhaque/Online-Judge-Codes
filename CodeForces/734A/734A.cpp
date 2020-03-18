#include<bits/stdc++.h>
using namespace std;
int main()
{
    string result;
    int n;
    cin >> n;
    cin >> result;
    int c_a=0,c_d=0;
    for(int i=0; i<n; i++)
    {
        if(result[i]=='A')
            c_a++;
        else
            c_d++;
    }
    if(c_a>c_d)
        cout << "Anton" << endl;
    else if(c_a<c_d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}
