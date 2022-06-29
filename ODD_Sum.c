#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
        else
        {
            count=count+arr[i];
        }
    }
    printf("%d",sum);
}