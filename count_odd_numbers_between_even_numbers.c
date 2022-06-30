#include<stdio.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size-1;i++)
    {
        if(arr[i-1]%2==0 && arr[i+1]%2==0)
        {
            if(arr[i]%2!=0)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
}