#include<bits/stdc++.h>
#include<stack>
using namespace std;
int priority(char c)
{
    if(c=='(')
        return 1;
    else if(c=='+')
        return 2;
    else if(c=='-')
        return 2;
    else if(c=='*')
        return 3;
    else if(c=='/')
        return 3;
}

int main()
{
    int T, i;
    char a[10], c;
    cin >> T;
    gets(a);
    gets(a);
    while (T--)
    {
        stack <char> st;
        while (gets(a) && strlen(a))
        {
            c = a[0];
            if (c==' ')
                break;
            if (c=='(')
            {
                st.push(c);
            }
            else if (c=='+' || c=='-' || c=='*' || c=='/')
            {
                while (!st.empty() && priority(c) <= priority(st.top()))
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.push(c);
            }
            else if (c==')')
            {
                while (st.top()!='(')
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.pop();
            }
            else
                printf("%c", c);
        }
        while (!st.empty())
        {
            printf("%c", st.top());
            st.pop();
        }
        cout << endl;
        if (T)
            cout << endl;
    }
}