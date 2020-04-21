#include<stdio.h>
int main()
{
    int a[100],i=1,k;
    while(1)
    {
        scanf("%d",&k);
        if(k!=42 && k<100)
        {
            a[i]=k;
            i++;
        }
        else if(k==42)
            break;
    }
    for(k=1; k<i; k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}
