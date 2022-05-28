#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         if(arr[n-i-1]%2==0)
         {
             printf("%d",arr[n-i-1]);
             break;
         }
     }
}