#include<stdio.h>
int main()
{
    int size,min;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        min=arr[0];
        if(arr[0]>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
}