#include<stdio.h>
int primes_range(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
      if(num%i==0)
      {
        count++;
      }
    }
    if(count<=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     if(n%i==0)
      {
       if(primes_range(i)==0)
        {
          sum++;
        }
      }
    }
    printf("%d",sum+1);
}