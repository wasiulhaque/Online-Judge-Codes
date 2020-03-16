 #include<stdio.h>
int main()
{
    int n,p,v,t,i,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&p, &v, &t);
        if(p+v+t>1)
        {
            count=count+1;
        }

    }
    printf("%d",count);

}
