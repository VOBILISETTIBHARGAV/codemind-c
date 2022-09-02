#include<stdio.h>
int main()
{
    int n,count=0,a,b,sum=0,min;
    scanf("%d",&n);
    int arr[n],i,arr1[100],arr2[200],k=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    min=100;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]<min)
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