#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,k=1,y,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(arr[i]*pow(2,n-i-1));
    }
    printf("%d",sum);
}