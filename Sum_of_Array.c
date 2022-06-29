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
            sum=sum+arr[i];
    }
    printf("%d",sum);
}