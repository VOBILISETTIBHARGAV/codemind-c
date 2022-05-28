#include<stdio.h>
int main()
{
  int n,i,count=0;
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
      if(i*(i+1)==n)
      {
          count=1;
          break;
      }
  }
  if(count==1)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
}