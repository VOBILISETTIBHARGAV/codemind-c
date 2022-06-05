#include<stdio.h>
int main()
{
    int size,sum=0,sum1=0,sum2=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size/2;i++)
    {
        sum=sum+arr[i];
    }
    for(i=0;i<size;i++)
    {
        sum1=sum1+arr[i];
    }
    sum2=sum1-sum;
    printf("%d",sum2-sum);
}