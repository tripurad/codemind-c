#include<stdio.h>
int main()
{
    int i,n,n1=0,n2=1,n3;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n3=n1+n2;
        printf("%d ",n1);
        n1=n2;
        n2=n3;
    }
}