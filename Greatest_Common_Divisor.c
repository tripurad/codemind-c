#include<stdio.h>
int main()
{
    int i,a,b,lcm,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        lcm=i*a;
        if(lcm%b==0)
        break;
    }
    gcd=a*b/lcm;
    printf("%d",gcd);
}