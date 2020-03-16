#include<stdio.h>
int main()
{
    int btm17[3], btm18[3];
    int sum17=0,sum18=0;
    printf("Enter goals for BTM 17: ");
    scanf("%d%d%d",&btm17[0], &btm17[1], &btm17[2]);
    printf("Enter goals for BTM 18: ");
    scanf("%d%d%d",&btm18[0], &btm18[1], &btm18[2]);
    int i;
    for(i=0;i<3;i++){
        sum17=sum17+btm17[i];
        sum18=sum18+btm18[i];
    }
    if(sum17>sum18)
        printf("BTM 17 jita gese :(");
    else
        printf("BTM 18 jita gese :D");
}
