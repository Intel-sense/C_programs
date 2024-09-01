#include<stdio.h>
void main()
{
int rev=0;
int num =12345;
while(num!=0)
{
rev = rev*10+num%10;
num =  num/10;
}
printf("reverse %d",rev);
}

