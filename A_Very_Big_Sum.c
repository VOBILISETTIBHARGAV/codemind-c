#include<stdio.h>
int main()
{
    long long int size,i,sum=0;
    scanf("%lld",&size);
    long long int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
}