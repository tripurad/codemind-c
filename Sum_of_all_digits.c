#include<stdio.h>
int main()
{
	int i,r,n,dc=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		dc=dc+r;
		n=n/10;
	}
	printf("%d",dc);
}