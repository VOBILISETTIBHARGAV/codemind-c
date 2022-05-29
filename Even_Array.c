#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}