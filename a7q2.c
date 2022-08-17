//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int a[100];
int fib(int n)
{
    if(n==1 || n==2)
        {
            a[n-1]=n-1;
            return (n-1);
        }

    else
    {
        a[n-1]=(fib(n-1)+fib(n-2));
        return (fib(n-1)+fib(n-2));
    }

}
void main()
{
    int n;
    scanf("%d",&n);
    fib(n);

    for(int i=0;i<n;++i)
        {
            if(a[i]==n)
                printf("yes");
            else
                printf("noo");
        }
}
