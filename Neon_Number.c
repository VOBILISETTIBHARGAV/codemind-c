#include<stdio.h>
int main()
{
    int temp,sum=0,m,n;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        temp=m%10;
        sum=sum+temp;
        m=m/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}