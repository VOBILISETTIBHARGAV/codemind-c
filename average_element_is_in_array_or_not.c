#include<stdio.h>
int main()
{
    int size,flag=0,sum=0,x;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<size;i++)
   {
       sum=sum+arr[i];
   }
   x=sum/size;
   for(i=0;i<size;i++)
   {
       if(arr[i]==x)
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}