#include<stdio.h>
#include<math.h>

int main()
{
    float a, b;
    int c;
    scanf("%f",&a);
    b = sqrt(a);
    c = (int) b;
    int s;
    s = c * c;
    if(s==a)
        printf("Perfect square");
    else
        printf("Not perfect square");
}
