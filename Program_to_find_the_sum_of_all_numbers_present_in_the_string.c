#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,sum=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            sum=sum+str[i]-48;
        }
    }
    printf("%d",sum);
} 