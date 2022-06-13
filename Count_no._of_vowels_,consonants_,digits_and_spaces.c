#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,sum1=0,sum2=0,sum3=0,sum4=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
         if(str[i]=='a' || str[i]=='A'|| str[i]=='e' || str[i]=='E' ||str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
         {
             sum1++;
         }
         else if(str[i]>=48 && str[i]<=57)
         {
             sum3++;
         }
         else if(str[i]==32)
         {
             sum4++;
         }
         else if(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90 && str[i]!=65 && str[i]!=69 &&  str[i]!=73 && str[i]!=79 && str[i]!=85 && str[i]!=97 &&  str[i]!=101 && str[i]!=105 && str[i]!=111 && str[i]!=117)
         {
             sum2++;
         }
    }
    printf("Vowels: %d",sum1);
    printf("
Consonants: %d",sum2);
    printf("
Digits: %d",sum3);
    printf("
White spaces: %d",sum4);
}