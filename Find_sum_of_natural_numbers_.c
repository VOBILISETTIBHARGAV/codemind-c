#include<stdio.h>
int main()
{
    int i,sum=0,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}