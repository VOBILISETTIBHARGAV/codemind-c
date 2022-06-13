#include<stdio.h>
int divisors(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a,i,total=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(divisors(i)==9)
        {
            printf("%d ",i);
            total++;
        }
    }
    printf("
Total=%d",total);
}