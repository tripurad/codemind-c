#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(m-k>=n)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        t--;
    }
}