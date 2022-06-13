#include<stdio.h>
int main()
{
    int n,k,b,arr1[100],i=0,arr2[100],j=0,temp,tem,count=0,sum=0;
    scanf("%d",&n);
    k=n;
    b=n;
    while(b>0)
    {
        b=b/10;
        count++;
    }
    while(n>0)
    {
        temp=n%10;
        arr1[i++]=temp;
        n=n/10;
    }
    while(k>0)
    {
        tem=k%10;
        arr2[j++]=tem;
        k=k/10;
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            if(i!=j && arr1[i]==arr2[j])
            {
                sum++;
            }
        }
    }
    if(sum==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}