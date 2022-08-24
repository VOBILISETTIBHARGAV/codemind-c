#include<stdio.h>
int main()
{
    int a,b,sum=0,n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
}