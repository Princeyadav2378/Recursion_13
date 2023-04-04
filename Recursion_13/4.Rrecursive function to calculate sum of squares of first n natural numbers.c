// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_of_square(int);
int main()
{
	int a,s;
	printf("Enter the Number:\n");
	scanf("%d",&a);
	s=sum_of_square(a);
	printf("%d",s);
	return s;
}
int sum_of_square(int n)
{
	int s=0;
	if(n==1)
	 return 1;
	s=n*n+sum_of_square(n-1);
	return s;
}
