//WAP to check character from given string
#include<stdio.h>
#include<string.h>
void main()
{


char str[20],ch;
int i,f;
printf("\n enter string:");
gets(str);
printf("\n the character that you want to find:");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++)
{
   if(ch==str[i])
   {
       f=0;
       break;
   }
   else
    f=1;

}
if(f==0)
    printf("character is available in string");
    else
    printf("character is not available in string");
}
