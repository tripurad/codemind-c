#include<stdio.h>
int main()
{
    int i,n,c,a=0,b=1,flag=0;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        if(c==n)
        {
            flag=1;
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}