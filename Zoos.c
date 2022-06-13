#include<stdio.h>
int main()
{
    char str[100],i,sum=0,count=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            count++;
        }
        else if(str[i]=='o')
        {
            sum++;
        }
        else
        {
            continue;
        }
    }
    if(2*count==sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}