//finding factorial of given number
#include<iostream>
int main()
{
	int n,i,fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
