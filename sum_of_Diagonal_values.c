#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j || i+j==a-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}