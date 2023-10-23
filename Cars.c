#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/4;
    if(n%4==0)
    {
        printf("%d",x);
    }
    else if(n%4!=0)
    {
        printf("%d",x+1);
    }
    else 
    {
        printf("1");
    }
}