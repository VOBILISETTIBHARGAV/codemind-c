#include<stdio.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
          sum=sum+arr[i];
        }
        else
        {
            break;
        }
    }
    printf("%d
",sum);
}