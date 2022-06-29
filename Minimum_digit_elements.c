#include<stdio.h>
int digits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n,count=0,min;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=digits(arr[0]);
    for(i=0;i<n;i++)
    {
        if(digits(arr[i])<min)
        {
            min=digits(arr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(digits(arr[i])==min)
        {
            count++;
        }
    }
    printf("%d",count);
}