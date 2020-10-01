#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	scanf("%d",&n);		// enter size of array
	int a[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);	// enter numbers 
	
	for(i=0;i<n;i++)
	sum=sum+a[i];		// calculating sum
	
	printf("%d",sum);	// sum of a given number
}
