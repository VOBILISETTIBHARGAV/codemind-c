#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",b);
    }
}