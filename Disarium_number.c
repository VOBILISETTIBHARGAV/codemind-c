#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,m,k,temp,sum=0;
    scanf("%d",&n);
    m=n;
    k=m;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    while(m>0)
    {
        temp=m%10;
        sum=sum+pow(temp,count);
        m=m/10;
        count--;
    }
    if(sum==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}