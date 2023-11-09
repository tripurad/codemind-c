#include<stdio.h>
int main()
{
    int a,b,n,rev=0;
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(b==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}