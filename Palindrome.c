#include<stdio.h>
int main()
{
	int b,a,n,rev=0;
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
		printf("Palindrome");
	}
	else 
	{
		printf("Not Palindrome");
	}
}	