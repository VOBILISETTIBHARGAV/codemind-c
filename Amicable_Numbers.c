#include<stdio.h>
int main()
{
    int a,b,i,suma=0,sumb=0;
    scanf("%d",&a);
    scanf("
%d",&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            suma=suma+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sumb=sumb+i;
        }
    }
    if(a==sumb && b==suma)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}