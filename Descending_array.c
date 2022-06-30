#include<stdio.h>
int main()
{
int size,sum=0; 
scanf("%d", &size);
int arr[size],i; 
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
{
if(arr[i]>arr[i+1])
{
sum++;
}
else
{
    break;
}
}
if(size-1==sum)
{
    printf("yes");
}
else
{
    printf("no");
}
}