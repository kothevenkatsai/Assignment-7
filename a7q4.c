//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int lcm;
    for(int i=1;i<=n1*n2;++i)
    {
        if(i%n1==0 && i%n2==0)
            {
                lcm=i;
                break;
            }
    }
    int hcf;
    hcf=(n1*n2)/lcm;
    printf("%d",hcf);

}
