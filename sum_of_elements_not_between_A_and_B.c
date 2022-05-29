#include<stdio.h>
int main()
{
    int n,a,b,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
      if(arr[i]<a)
      {
          sum=sum+arr[i];
      }
      else if(arr[i]>b)
      {
          sum=sum+arr[i];
      }
      else
      {
          continue;
      }
    }
    printf("%d",sum);
}