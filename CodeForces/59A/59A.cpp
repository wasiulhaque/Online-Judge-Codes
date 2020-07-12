#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c_c=0,c_s=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            c_s++;

        else if(s[i]>='A' && s[i]<='Z')
            c_c++;
    }

//    cout << c_c << endl;
//    cout << c_s << endl;

    if(c_s>=c_c){
        for(int i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else if(c_s<c_c){
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
