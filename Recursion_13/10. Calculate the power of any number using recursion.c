// 10. Write a program in C to calculate the power of any number using recursion
#include<stdio.h>
int power(int,int);
int main()
{
	int b,p,r;
	printf("Enter base value: ");
	scanf("%d",&b);
	printf("Enter power value: ");
	scanf("%d",&p);
	r=power(b,p);
	printf("%d",r);
}
int power(int b,int p)
{
	if(p==0)
	return 1;
	return b*power(b,p-1);
}
