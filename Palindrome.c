#include<stdio.h>
int main()
{
    int n,sum=0,m,temp;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        temp=n%10;
        sum=(sum*10)+temp;
        n=n/10;
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