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
     min=arr[0];
    for(i=0;i<size;i++)
    {
        if(min<arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
}