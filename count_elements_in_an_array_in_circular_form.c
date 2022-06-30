#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    int arr[n],i,a[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-2;i<n;i++)
    {
        a[j++]=arr[i];
        sum++;
    }
    for(i=0;i<2;i++)
    {
        a[j++]=arr[i];
        sum++;
    }
    for(i=1;i<n-1;i++)
    {
        if((arr[i-1]%2==0 && arr[i+1]%2!=0) || (arr[i-1]%2!=0 && arr[i+1]%2==0))
        {
            count++;
        }
    }
    for(j=1;j<sum-1;j++)
    {
         if((a[j-1]%2==0 && a[j+1]%2!=0) ||(a[j-1]%2!=0 && a[j+1]%2==0))
        {
            count++;
        }
    }
    printf("%d",count);
}