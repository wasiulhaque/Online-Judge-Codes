#include<stdio.h>
int main()
{
    int a,b,c,m[6],i,j=0,k=1;
    scanf("%d%d%d", &a, &b, &c);

    m[0]=a*b*c;
    m[1]=a+b+c;
    m[2]=a*(b+c);
    m[3]=a+(b*c);
    m[4]=(a*b)+c;
    m[5]=(a+b)*c;

    for(i=1;i<6;++i)
    {
        if(m[0]<m[i])
        {
            m[0]=m[i];
        }
    }
    printf("%d",m[0]);
    return 0;

}