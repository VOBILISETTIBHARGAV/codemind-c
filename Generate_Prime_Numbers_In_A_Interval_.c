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
    if(count==2)
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
    int a,b,count=0,i;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        if(primes_range(a)==1)
        {
           printf("%d
",a);
        }
        else
        {
            continue;
        }
    }
}