//5. Write a program to check whether two given numbers are co-prime numbers or not
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
    if(hcf==1)
        printf("it is coprime");
    else
        printf("it is not a coprime");
}
