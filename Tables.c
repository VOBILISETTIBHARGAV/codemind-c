#include<stdio.h>
int main()
{
    int i,b,a;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i=i+2)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}