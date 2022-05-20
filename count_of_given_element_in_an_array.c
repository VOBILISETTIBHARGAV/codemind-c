#include<stdio.h>
int main()
{
    int n,count=0,se;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            count++;
        }
    }
    printf("%d",count);
}