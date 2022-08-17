//8. Write a program to find next Prime number of a given number
#include<stdio.h>
int checkPrime(int n)
{
    int flag=0;
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
            flag++;
    }
    if(flag==0)
        return 1;
    else
        return 0;

}
void main()
{
    int n;
    int flag=0;
    scanf("%d",&n);
    for(int i=n+1;i<n*n;i++)
    {
        if(flag==1)
            break;
        if(checkPrime(i))
        {
            flag++;
            printf("%d ",i);

        }
    }
}
