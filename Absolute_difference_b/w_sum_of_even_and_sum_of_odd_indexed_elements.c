#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,sum1=0,sum2=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    printf("%d",abs(sum1-sum2));
}