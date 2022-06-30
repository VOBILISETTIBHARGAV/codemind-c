#include<stdio.h>
int main()
{
    int n,a,b,count=0,ar[100],k=0,max,sum=0;
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
        ar[k++]=arr[i];
          count++;
      }
      else if(arr[i]>b)
      {
          ar[k++]=arr[i];
          count++;
      }
    }
    max=ar[0];
    for(k=0;k<count;k++)
    {
        if(ar[k]>max)
        {
            max=ar[k];
        }
        sum++;
    }
    if(sum>0)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}