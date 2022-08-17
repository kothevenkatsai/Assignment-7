//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if((i%2!=0 || i==2) && (i%3!=0 || i==3) && (i%5!=0 || i==5) && (i%7!=0 || i==7))
            printf("%d ",i);
    }
}
