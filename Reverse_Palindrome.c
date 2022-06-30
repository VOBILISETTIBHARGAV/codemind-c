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
    int x;
    scanf("%d",&x);
    do
    {
        x=x+reverse(x);
    } 
    while(x!=reverse(x));
    {
       printf("%d",x); 
    }
}