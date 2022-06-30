#include<stdio.h>
int main()
{
    int min,w,h,n,count=0,sum1=0,sum2=0;
    scanf("%d",&min);
    scanf("%d",&n);
    int arr1[n],arr2[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr1[i],&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]>=min && arr2[i]>=min && arr1[i]!=arr2[i])
        {
            printf("CROP IT
");
        }
        else if(arr1[i]<min || arr2[i]<min)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if((arr1[i]>=min && arr2[i]>=min) && (arr1[i]==arr2[i]))
        {
            printf("ACCEPTED
");
        }
    }
}