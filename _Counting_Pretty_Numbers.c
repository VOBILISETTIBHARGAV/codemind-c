#include<stdio.h>
int sum(int n)
{
     int count=0;
     if(n%10==2 || n%10==3 || n%10==9)
     {
         count++;
     }
     if(count==1)
     {
        return 1;
     }
     else
     {
        return 0;
     }
}
int main()
{
    int n,a,b,count=0,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(sum(j)==1)
            {
                count++;
            }
        }
        printf("%d
",count);
        count=0;
    }
}