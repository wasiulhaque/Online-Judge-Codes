#include<stdio.h>
int main()
{
    long long n, m, a, sbc, sbr;
    scanf("%I64d%I64d%I64d", &n, &m, &a);
    if(n%a==0)
        sbc=n/a;
    else
    {
        sbc=n/a;
        sbc++;
    }
    if(m%a==0)
        sbr=m/a;
    else
    {
        sbr=m/a;
        sbr++;
    }
    printf("%I64d", sbc*sbr);
    return 0;
}