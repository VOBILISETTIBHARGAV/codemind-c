#include<stdio.h>
int reverse(int a)
{
  int b,reverse=0;
    while(a>0)
	{
	 	b=a%10;
	 	reverse=reverse*10+b;
	 	a=a/10;
	}
  return reverse;
}
int main()
{
int  x,i,y;
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
{
    if(i==reverse(i))
    {
        printf("%d ",i);
    }
}
}