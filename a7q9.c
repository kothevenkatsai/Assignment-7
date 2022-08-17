//9. Write a program to check whether a given number is an Armstrong number or not
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
    int n;
    scanf("%d",&n);
    if(checkAm(n))
        printf("yess");
    else
        printf("noo");

}
