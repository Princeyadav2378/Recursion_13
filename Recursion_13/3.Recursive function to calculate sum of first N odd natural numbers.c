// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int EvenSum(int);
int main()
{
	int a,s;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	s=EvenSum(a);
	printf("%d",s);
	return 0;
}
int EvenSum(int n)
{
	int s=0;
	if(n==1)
	return 2;
	s=2*n+EvenSum(n-1);
	return s;
}
