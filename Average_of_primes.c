#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,count=0;
    float avg,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(arr[i]))
        {
            sum=sum+arr[i];
            count++;
        }
    }
    avg=sum/count;
    printf("%.2f",avg);
}