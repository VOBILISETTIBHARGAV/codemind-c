#include<stdio.h>
int main()
{
    int n,temp,max;
    scanf("%d",&n);
    max=n%10;
    while(n>0)
    {
        temp=n%10;
        if(temp>max)
        {
          max=temp;
        }
        n=n/10;
    }
     printf("%d",max);
}