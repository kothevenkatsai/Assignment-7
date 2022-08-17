//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int checkAm(int n)
{
    int sum=0,n1;
    n1=n;
    while(n>0)
    {
        int a=n%10;
        sum=sum+(a*a*a);
        n=n/10;
    }
    if(n1==sum)
        return 1;
    else
        return 0;
}
void main()
{
    for(int i=1;i<1000;++i)
    {
        if(checkAm(i))
            printf("%d ",i);
    }
}
