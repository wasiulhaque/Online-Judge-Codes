#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x=0;
    char c[100],p[4]="X++",m[4]="X--",P[4]="++X",M[4]="--X";

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",c);
        if((strcmp(c,p)==0) || (strcmp(c,P)==0))
            x++;
        else
            x--;
    }
    printf("%d",x);
    return 0;
}
