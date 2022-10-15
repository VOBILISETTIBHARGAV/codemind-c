#include<stdio.h>
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    if(prime(n)==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}