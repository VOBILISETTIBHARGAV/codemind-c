#include<stdio.h>
int main()
{
    int temp,sum=0,pro=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        pro=pro*temp;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}