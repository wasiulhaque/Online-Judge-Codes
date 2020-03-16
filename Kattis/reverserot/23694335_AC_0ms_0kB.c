#include<stdio.h>
#include<string.h>
void reverse(char *x, int begin, int end)
{
    char c;

    if (begin >= end)
        return;

    c          = *(x+begin);
    *(x+begin) = *(x+end);
    *(x+end)   = c;

    reverse(x, ++begin, --end);
}
int main()
{
    char a[28];
    int shift, i,t;
        scanf("%d",&shift);
        while(shift!=0)
        {
            char b[1000],c[1000];
            for(i=0; i<28; i++)
            {
                a[i]='A' + i;
                if(i==26)
                {
                    a[i]='_';
                }
                else if(i==27)
                {
                    a[i]='.';
                }
            }
            int j;
            gets(b);
            fflush(stdin);
            for(i=0; i<strlen(b); i++)
            {
                for(j=0; j<28; j++)
                {
                    if(a[j]==b[i])
                    {
                        j=(j+shift)%28;
                        b[i]=a[j];
                    }
                }
            }
            reverse (b,0,strlen(b)-1);
            puts(b);
            scanf("%d",&shift);
    }
    return 0;
}
