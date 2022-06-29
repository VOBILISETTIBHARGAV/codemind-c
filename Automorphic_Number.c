#include<stdio.h>
#include<math.h>
int count(int n)
{
    int sum=0;
    while(n>0)
    {
        n=n/10;
        sum++;
    }
    return sum/2;
}
int automorphic(int n)
{
    int m,k;
    m=n*n;
    k=pow(10,count(m));
    if(m%k==n)
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
    int n;
    scanf("%d",&n);
    if(automorphic(n)==1)
    {
        printf("Automorphic Number");
    }
    else
    {
         printf("Not an Automorphic Number");
    }
}