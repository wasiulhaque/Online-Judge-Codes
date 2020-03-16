#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,area,i,j=0,T;
    scanf("%d", &T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
        d1=a1-b1+c1;
        d2=a2-b2+c2;
        area=abs((a1*b2+b1*c2+c1*d2+d1*a2-b1*a2-c1*b2-d1*c2-a1*d2)/2);
        j++;

        printf("Case %d: %d %d %d\n",j,d1,d2,area);
    }
    return 0;

}