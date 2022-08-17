//3. Write a program to check whether a given number is there in the Fibonacci series or not.
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
    fib(2*n);
    int flag=0;
    for(int i=0;i<2*n;++i)
        {
            if(a[i]==n)
                {
                    flag++;
                    break;
                }
        }
        if(flag==0)
            printf("no");
        else
            printf("yess");


}
