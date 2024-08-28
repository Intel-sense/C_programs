#include<stdio.h>
void main()
{
char c[20];
printf("Enter a character");
fgets(c,sizeof(c),stdin);
puts(c);
}

