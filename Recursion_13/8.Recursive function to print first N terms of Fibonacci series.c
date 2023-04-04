// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
void fibonacci(int,int,int);
int main()
{
    int n;
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);
    fibonacci(n, 0, 1);
    return 0;
}

void fibonacci(int n, int a, int b) 
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}
