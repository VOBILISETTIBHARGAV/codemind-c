#include<stdio.h>
int add_digits(int n)
{
    int sum=0,temp;
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    return sum;
}
int digits(int a)
{
    int male;
    while(a>0)
    {
        if(add_digits(a)%10==add_digits(a))
        {
            male=add_digits(a);
            break;
        }
        else
        {
            a=add_digits(a);
        }
    }
    return male;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digits(n));
}