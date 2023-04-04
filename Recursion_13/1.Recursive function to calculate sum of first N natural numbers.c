// 1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int sum(int);
int main()
{
	int a,s;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	s=sum(a);
	printf("%d",s);
	
}
int sum(int n)
{
	int s=0;
	if(n==1)
	 return 1;
	s = n+sum(n-1);
	return s;
}
