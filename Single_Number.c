#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x],i,j,count=0,c=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        c=0;
        for(j=0;j<x;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if(c==1)
        {
            continue;
        }
        else
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}