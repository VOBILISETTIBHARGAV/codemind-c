#include<stdio.h>
int main()
{
    int n,i,temp,m,count=0,rev=0,sum=0;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           count++;
       }
    }  
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
     for(i=1;i<=rev;i++)
     {
         if(rev%i==0)
         {
             sum++;
         }
     }
    if(count==2 && sum==2)
    {
        printf("circular prime");
    }
    else if(count==2 && sum!=2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}