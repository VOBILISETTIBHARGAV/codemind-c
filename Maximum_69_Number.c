#include<stdio.h>
int main()
{
    int n,count=0,temp;
    scanf("%d",&n);
    int arr[90],j=0;
    while(n>0)
    {
        temp=n%10;
        arr[j++]=temp;
        n=n/10;
        count++;
    }
    for(j=count-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
            arr[j]=9;
            break;
        }
    }
    for(j=count-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}