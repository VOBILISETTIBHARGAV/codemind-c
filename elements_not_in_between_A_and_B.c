#include<stdio.h>
int main()
{
    int n,a,b,count=0;
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
          printf("%d ",arr[i]);
          count++;
      }
      else if(arr[i]>b)
      {
          printf("%d ",arr[i]);
          count++;
      }
    }
    if(count==0)
    {
        printf("-1");
    }
}