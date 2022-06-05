#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}