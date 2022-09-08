#include<stdio.h>
int main()
{
    int n,sum=0,count=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        while(arr[i]>0)
        {
            arr[i]=arr[i]/10;
            count++;
        }
        if(count%2==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}