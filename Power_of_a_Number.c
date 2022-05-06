#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,a;
    scanf("%d%d%d",&x,&y,&n);
    a=pow(x,y);
    printf("%d",a%n);
}