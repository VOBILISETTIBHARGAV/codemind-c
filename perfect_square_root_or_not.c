#include<stdio.h>
#include<math.h>
int main()
{
    int n,q;
    scanf("%d",&n);
    q=sqrt(n);
    if(q*q==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}