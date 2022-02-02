#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[100],i,j;
    int a=0,b=1,c;
    int diff1,diff2;
    for (i=0; i<100; i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
    }
    for (i=0; i<100; i++)
    {
        if (arr[i]>num)
        {
            diff1=arr[i]-num;
            diff2=num-arr[i-1];
            if (diff1>diff2)
            {
                printf("%d",arr[i-1]);
            }
            else if (diff2>diff1)
            {
                printf("%d",arr[i]);
            }
            else if (diff1==diff2)
            {
                printf("%d %d",arr[i-1],arr[i]);
            }
            break;
        }
    }
    return 0;
}