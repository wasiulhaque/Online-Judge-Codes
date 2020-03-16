#include<stdio.h>
int main()
{
    int n[100],N,sum,loop,k,st=0;
    scanf("%d", &loop);
    int i=0,j;

    while(i<loop)
    {
        scanf("%d", &k);
        scanf("%d", &sum);
        st=0;

        for(j=0;j<k;j++)
        {
            scanf("%d", &n[j]);
            st=st+n[j];
        }

        if((st+1500)==sum)
            printf("Correct\n");
        else
            printf("Bug\n");
        i++;

    }
    return 0;
}