#include<stdio.h>
int main()
{
    int i,a,b,temp=1,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
           temp=i;
        }
    }
    lcm=a*b/temp;
    printf("%d",lcm);
}