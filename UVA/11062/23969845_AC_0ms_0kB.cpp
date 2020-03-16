#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, index = 0;
    map<string, char> m;
    char input, s[500];
    while(1)
    {
        input = getchar();
        if(input == EOF)
            break;
        if(input >= 'A' && input <= 'Z')
            input = input - 'A' + 'a';
        if(input >= 'a' && input <= 'z')
        {
            s[index++] = input;
        }
        else if(input != '-')
        {
            s[index++] = '\0';
            if(index > 1)
            {
                m[s] = 1;
            }
            index = 0;
        }
        else
        {
            input = getchar();
            if(input != '\n')
            {
                s[index++] = '-';
                if(input >= 'A' && input <= 'Z')
                    input = input - 'A' + 'a';
                s[index++] = input;
            }
        }
    }
    for(map<string, char>::iterator i = m.begin(); i != m.end(); i++)
        puts(i->first.c_str());
    return 0;
}