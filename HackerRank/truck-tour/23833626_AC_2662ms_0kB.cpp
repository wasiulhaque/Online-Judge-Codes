#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long p[n],d[n];
    int i,start=0, finish=0,flag=0;
    for(i=0; i<n; ++i)
    {
        cin>>p[i];
        cin>>d[i];
        long long canGo = canGo + p[i] - d[i];
        if(canGo<0)
        {
            finish = i+1;
            canGo = 0;
        }
    }
    printf("%d\n",finish);
}