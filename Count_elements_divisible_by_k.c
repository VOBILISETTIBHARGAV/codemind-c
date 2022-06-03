#include<stdio.h>
int main()
{
     int size,di,count=0;
     scanf("%d%d",&size,&di);
     int arr[size],i;
     for(i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
     for(i=0;i<size;i++)
     {
         if(arr[i]%di==0)
         {
             count++;
         }
     }
     printf("%d",count);
}