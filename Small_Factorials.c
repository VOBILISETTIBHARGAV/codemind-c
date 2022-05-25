#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
   int n,temp,i,m,sum=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       sum=sum+fact(arr[i]);
       printf("%d
",sum);
       sum=0;
   }
}