#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,m,sum=0,temp,count=0;
    scanf("%d",&n);
    k=n;
    m=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    while(k>0)
    {
        temp=k%10;
        sum=sum+pow(temp,count);
        k=k/10;
        count--;
    }
    if(sum==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}