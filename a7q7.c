//7. Write a program to print all Prime numbers between two given numbers
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
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;++i)
    {
        if(checkPrime(i))
            printf("%d ",i);
    }
}
