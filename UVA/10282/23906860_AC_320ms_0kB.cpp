#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input, actual, translation, foreign;
    map<string, string>m;
//    cin>>input;
    while(getline(cin,input) && input.size())
    {
        stringstream splitted;
        splitted << input;
        splitted >> actual >> translation;
        m[translation] = actual;
    }
    while(cin>>foreign)
    {
        if(m.count(foreign))
            cout << m[foreign] << endl;
        else
            cout << "eh" << endl;
    }
}