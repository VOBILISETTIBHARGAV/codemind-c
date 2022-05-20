#include<stdio.h>
int main()
{
    int size,flag=0;
    float sum=0,x;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    x=sum/size;
    printf("%.2f",x);
}