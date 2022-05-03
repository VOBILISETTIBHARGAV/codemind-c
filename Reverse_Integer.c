#include<stdio.h>
int main()
{
    int rev=0,n,temp=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("%d",rev);
}