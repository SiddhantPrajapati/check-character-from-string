//WAP to check character from given string
#include<stdio.h>
#include<string.h>
void main()
{
    int i,f;
    char a[10],n;
    printf("enter string:");
    gets(a);
    printf("enter the character that you want to find:");
    scanf("%c",&n);
    for(i=0;a[i]!='\0';i++)
    {
        if(n==a[i])
        {
            f=0;
        break;
        }
        else
            f=1;
    }
    if(f==0)
        printf("character is present.");
    else
        printf("character is absent.");
}
