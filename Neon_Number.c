#include<stdio.h>
int main()
{
	int num,temp,sum=0,m;
	scanf("%d",&num);
	m=num*num;
	while(m>0)
	{
		temp=m%10;
		sum=sum+temp;
		m=m/10;
	}
	if(sum==num)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}