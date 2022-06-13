#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,sum=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
         if(str[i]==32)
         {
             sum++;
         }
    }
    printf("%d",sum+1);
}