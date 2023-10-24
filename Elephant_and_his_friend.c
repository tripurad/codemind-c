#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=x/5;
    if(x==5)
    {
        printf("1");
    }
    else if(x%5==0)
    {
        printf("%d",a);
    }
    else 
    {
        printf("%d",a+1);
    }
}