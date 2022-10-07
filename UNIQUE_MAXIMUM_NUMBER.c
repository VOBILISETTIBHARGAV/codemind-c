#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,temp,max=0;
    scanf("%d",&n);
    int arr[n],i,j=0,arr1[100];
    for(i=00;i<n;i++)
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
            if(i!=j && arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==0 && arr[i]>max)
        {
            max=arr[i];
        }
        count=0;
    }
    if(max>0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}