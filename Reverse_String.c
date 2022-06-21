#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int c=0,i;
    scanf("%[^
]s",ch);
    for(i=0 ; ch[i]!=NULL ;i++)
    {
        c++;
    }
    for(i=c-1 ; i>=0 ;i--)
    {
        printf("%c",ch[i]);
    }
}