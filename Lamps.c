#include<stdio.h>
int main()
{
    int n,k,x,y,ma;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int z=n-k;
    if(n==k)
    {
        printf("%d",k*x);
    }
    else if(x>y)
    printf("%d",k*x+z*y);
    else 
    {
        printf("%d",n*x);
    }
}