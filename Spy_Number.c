#include<stdio.h>
int main()
{
    int i,n,r,sum=0,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }
    if(pro==sum)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}