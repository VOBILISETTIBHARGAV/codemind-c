#include<stdio.h>
int main()
{
    int a,b,n,min;
    scanf("%d",&n);
    int arr[n],i,arr1[100],j=0,count=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
          printf("%d ",arr[i]);
          count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
}