#include<stdio.h>
int main()
{
    int n,x,k=1,y,count=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0 || arr[i]==1)
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}