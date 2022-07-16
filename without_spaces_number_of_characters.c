#include<stdio.h>
int main()
{
    char str[30],i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]!=32)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("%d",count);
    }
}