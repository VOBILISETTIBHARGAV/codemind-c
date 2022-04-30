#include<stdio.h>
int main()
{
   long long int i,n,count=0;
   scanf("%lld",&n);
   while(n>0)
   {
       n=n/10;
       count++;
   }
   if(count==10)
   {
       printf("Valid");
   }
   else
   {
       printf("Invalid");
   }
}