// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int);
int main()
{
	int a,fact;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	fact=factorial(a);
	printf("%d",fact);
	return 0;
}
int factorial(int n)
{
	int fact=1;
	if(n==1)
	 return 1;
	fact=n*factorial(n-1);
	return fact;
}
