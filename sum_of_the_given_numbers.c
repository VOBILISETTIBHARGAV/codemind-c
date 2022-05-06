#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int i,arr1[size],arr2[size];
	for(i=0;i<size;i++)
	{
		scanf("%d%d",&arr1[i],&arr2[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d
",arr1[i]+arr2[i]);
	}
}