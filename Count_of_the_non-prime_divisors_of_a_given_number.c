#include<stdio.h>
int primes_range(int num)
{
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(primes_range(i)==0)
            {
                s++;
            }
        }
    }
    printf("%d",s+1);
}