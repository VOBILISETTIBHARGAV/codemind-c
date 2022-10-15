#include<stdio.h>
int main()
{
    int n,k=1,count=0;
    scanf("%d",&n);
    int arr[n],i,arr1[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[j++]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr1[j] && i!=j)
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}