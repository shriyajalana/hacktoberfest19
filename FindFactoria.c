//Calculating factorial of given number in c language
#include<stdio.h>
int main()
{
	int n,i,p=1;
	scanf("%d",&n);
	prinf("Enter a Number ");
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	printf("factorial is %d",p);
}
