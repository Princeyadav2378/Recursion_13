// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digit(int);
int main()
{
	int a,s;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	s=sum_of_digit(a);
	printf("%d",s);
	return s;
}
int sum_of_digit(int n)
{
	int s=0;
	if(n==0)
	 return 0;
	s=n%10+sum_of_digit(n/10);
	return s;
}
