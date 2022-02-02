#include<stdio.h>
int main()
{
    int a,b,sum=0,s,i;
    scanf("%d",&a);
    s=a*a;
    for (i=0; s>=1; i++)
    {
        b=s%10;
        sum+=b;
        s=s/10;
    }
    if (sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}