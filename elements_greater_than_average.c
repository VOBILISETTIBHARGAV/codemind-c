#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    float x;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    x=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            count++;
        }
    }
    printf("%d",count);
}