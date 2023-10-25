#include<stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);
    int s=(sec%60);
    int m=(sec%3600)/60;
    int h=(sec%86400)/3600;
    printf("H:M:S-%d:%d:%d",h,m,s);
}