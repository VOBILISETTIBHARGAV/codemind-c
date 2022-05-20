#include<stdio.h>
int main()
{
    int size,flag=0,se;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("
%d",&se);
    for(i=0;i<size;i++)
    {
        if(arr[i]==se)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}