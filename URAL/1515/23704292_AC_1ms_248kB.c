#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i = 0;i<n;++i)
        scanf("%d",&a[i]);
    int max;
    max=0;
    for(int i = 0;i< n;++i){
        if(a[i]-max > 1)
            break;
        else
            max = max + a[i];
    }
    printf("%d\n",max + 1);
    return 0;
}