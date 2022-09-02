#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(prime(a)==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}