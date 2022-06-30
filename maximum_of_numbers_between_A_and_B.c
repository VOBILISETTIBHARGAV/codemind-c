#include<stdio.h>
int main()
{
    int n,count=0,sum=0,a,b,min;
    scanf("%d",&n);
    int arr[n],i,arr1[100],arr2[100],j=0,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    min=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]>min)
            {
                min=arr[i];
                count++;
            }
        }
    }
    if(count>0)
    {
      printf("%d",min);
    }
    else 
    {
      printf("-1");
    }
}