#include<stdio.h>
int main()
{
    int k,n,temp=0,rev=0,sum=0,m;
    scanf("%d",&n);
    m=n*n;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    k=rev*rev;
    while(k>0)
    {
        temp=k%10;
        sum=sum*10+temp;
        k=k/10;
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