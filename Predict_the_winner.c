#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum1=0,sum2=0,d;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    d=abs(sum1-sum2);
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}