#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5;
    cin >> c1;
    cin >> c2;
    cin >> c3;
    cin >> c4;
    cin >> c5;
    int N1[c1],N2[c2],N3[c3],N4[c4],N5[c5];
    int x[1000001] = {0};
    int i;
    fflush(stdin);
    for(i=0;i<c1;i++)
    {
        cin >> N1[i];
        x[N1[i]]++;
    }
    for(i=0;i<c2;i++)
    {
        cin >> N2[i];
        x[N2[i]]++;
    }
    for(i=0;i<c3;i++)
    {
        cin >> N3[i];
        x[N3[i]]++;
    }
    for(i=0;i<c4;i++)
    {
        cin >> N4[i];
        x[N4[i]]++;
    }
    for(i=0;i<c5;i++)
    {
        cin >> N5[i];
        x[N5[i]]++;
    }
      int  repeatCount=0;
    for(i=0;i< 1000001;i++)
    {
        if(x[i]>0)
        {
            if(x[i]>2)
            {
                repeatCount++;
            }
        }
    }
    cout << repeatCount;
}