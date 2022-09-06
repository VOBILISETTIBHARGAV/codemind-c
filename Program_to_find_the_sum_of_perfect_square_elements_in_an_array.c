#include<stdio.h>
#include<math.h>
int main()
{
    int size,sum=0,n;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        n=sqrt(arr[i]);
        if(arr[i]==n*n)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}