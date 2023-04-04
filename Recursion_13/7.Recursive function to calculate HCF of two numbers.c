// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int,int);
int main()
{
	int a,b,r;
	printf("Enter the Number:\n");
	scanf("%d%d",&a,&b);
	r=HCF(a,b);
	printf("%d",r);
	return 0;
}
int HCF(int a,int b)
{
	if(a==b)
	return a;
	if(a%b==0)
	 return b;
	if(b%a==0)
	return a;
	if(a>b)
	{
		return HCF(a%b,b);
	}
	else
	{
	       return HCF(b%a,a);		
	}
}
