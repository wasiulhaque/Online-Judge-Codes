#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int book[n+1]={0}, c[n+1];

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(int i=1; i<=n; i++)
        {
            if(book[i]==0)
            {
                int pass = a[i];
                int day = 1;
                book[i] = i;

                while(pass!=i)
                {
                    book[pass] = i;
                    pass = a[pass];
                    day++;
                }
                c[i] = day;
            }
        }
        for(int i=1; i<=n; i++)
        {
            int trace = book[i];
            cout<<c[trace]<<" ";
        }
        cout<<endl;
    }
}