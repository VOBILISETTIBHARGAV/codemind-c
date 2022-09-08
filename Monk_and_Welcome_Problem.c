#include<stdio.h>
int main()
{
    int sum=0,n;
    scanf("%d",&n);
    int arr1[n],arr2[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=arr1[i]+arr2[j];
                printf("%d ",sum);
            }
        }
    }
}