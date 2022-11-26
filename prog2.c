//REVERSE A STRING USING POINTERS
#include<stdio.h>
#include<string.h>
void main()
{
char str[50],*s;
int len,i;
printf("\nENTER A STRING: ");
gets(str);
s=str;
len=strlen(s);
printf("\nTHE REVERSE OF THE STRING IS:");
for(i=len;i>=0;i--)
{
printf("%c",*(s+i));
}
getch();
}
