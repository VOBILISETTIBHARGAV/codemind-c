#include<stdio.h>
int main()
{
    int n,arr1[100],k=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=n-1;i>=n/2;i--)
     {
         printf("%d ",arr[i]);
     }
     for(i=0;i<n/2;i++)
     {
         printf("%d ",arr[i]);
     }
}