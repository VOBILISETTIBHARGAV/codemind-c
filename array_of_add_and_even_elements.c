#include<stdio.h>
int main()
{
    int n,sum=0,a,b;
    scanf("%d",&n);
    int arr[n],i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2!=0)
         printf("%d ",arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
         printf("%d ",arr[i]);
    }
}