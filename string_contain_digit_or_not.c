#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,str1[100],k=0;
    int count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Contains %d digit",count);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}