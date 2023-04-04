// 9. Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int digit(int n,int count);
int main()
{
	int a,count;
	printf("Enter the Number: ");
	scanf("%d",&a);
	 count=digit(a,0);
	 printf("%d",count);
	return 0;
}
int digit(int n,int count)
{
	if(n==0)
       {
		return count;
	}
	else
	{
		count++;
		return digit(n/10,count);
	}
}
