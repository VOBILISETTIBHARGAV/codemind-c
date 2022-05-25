#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
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
    int a,b,i=1,m;
    scanf("%d%d",&a,&b);
    while(a>0 || b>0)
    {
        m=a+b+i;
        if(prime(m))
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}