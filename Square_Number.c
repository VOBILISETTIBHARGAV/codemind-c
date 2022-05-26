#include<stdio.h>
int main()
{
    int i,count=0,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}