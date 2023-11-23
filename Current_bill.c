#include<stdio.h>
int main()
{
    int u;
    float c,cb;
    scanf("%d",&u);
    if(u<=199)
    {
        c=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        c=u*1.50;
    }
    else if(u>=400 && u<600)
    {
        c=u*1.50;
    }
    else
    {
        c=u*2.00;
    }
    if(c>400)
    {
        cb=c*0.15+c;
        printf("%.2f",cb);
    }
    else
    {
        cb=c+100;
        printf("%.2f",cb);
    }
}