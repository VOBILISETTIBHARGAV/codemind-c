#include<stdio.h>
int palindrome(int n)
{
    int temp,rev=0;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(palindrome(arr[i])==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}