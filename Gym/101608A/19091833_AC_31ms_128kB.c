#include<stdio.h>
int main()
{

    freopen("tabs.in","r",stdin);
    int l,i,t,c,r;
    scanf("%d", &l);
    for(i=0;i<l;i++)
    {
        scanf("%d%d", &t, &c);
        if(c==1 && c==t)
            printf("0\n");
        else if(c==1 || c==t)
            printf("1\n");
        else
           printf("2\n");
    }
}