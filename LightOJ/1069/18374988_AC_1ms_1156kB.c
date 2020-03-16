#include<stdio.h>
int main()
{
    int t,m,l,time,floor,door,entex;
    int i,j;
    scanf("%d", &t);
    int a[t];

    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&l);
        if(m>=l)
            floor=(m-l)*4;
        else
            floor=(l-m)*4;
        door=3+3+3;
        entex=5+5;
        time=floor+door+entex+(m*4);

        a[i]=time;
    }

    i=0;

    for(j=1;j<=t;j++)
    {
        printf("Case %d: %d\n",j,a[i]);
        i++;
    }
    return 0;
}