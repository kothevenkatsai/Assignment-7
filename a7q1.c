//1. Write a program to find the Nth term of the Fibonacci series.
#include<stdio.h>
int fib(int n)
{
    if(n==1 ||n==2)
        return (n-1);
    else
        return (fib(n-1)+fib(n-2));
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
}
