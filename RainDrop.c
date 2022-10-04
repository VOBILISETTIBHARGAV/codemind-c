#include<stdio.h>
int main()
{
    int arr[100],k=0,count=0,i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[k++]=i;
            count++;
        }
    }
    for(k=0;k<count;k++)
    {
        if(arr[k]==3)
        {
            printf("Pling");
            sum++;
        }
        else if(arr[k]==5)
        {
            printf("Plang");
            sum++;
        }
        else if(arr[k]==7)
        {
            printf("Plong");
            sum++;
        }
    }
    if(sum==0)
    {
        printf("%d",n);
    }
}