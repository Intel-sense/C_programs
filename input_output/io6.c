#include<stdio.h>
void main()
{
char s[20];
printf("enter ur full name");
fgets(s,sizeof(s),stdin);
puts(s);
scanf("%s",s);
printf("%s",s);
}

