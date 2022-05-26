#include<stdio.h>
int main()
{
    int n,c,b,a;
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=n/10;
    if(a%2==0 && b%2==0 && c%2==0)
    {
        printf("Even");
    }
    else if(a%2!=0 && b%2!=0 && c%2!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}