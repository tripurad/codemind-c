#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        lcm=i*a;
        if(lcm%b==0)
        {
            break;
        }
    }
    printf("%d",lcm);
}