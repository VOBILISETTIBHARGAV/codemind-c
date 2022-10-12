#include<stdio.h>
#include<math.h>
int main()
{
    int n,su=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        su=su+(arr[i]*pow(2,n-i-1));
    }
    printf("%d",su);
}