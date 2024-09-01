#include<stdio.h>
#include<math.h>
void simple_intrest( float r,unsigned int y,unsigned int p)
{
 float total;
if(y>60 || r>=100)
{
printf("invalid values");
}else{
total = r*y*p/100;
printf("%f",total);
}
}
void main()
{
float r;unsigned int y;unsigned int p;
printf("Enter rate , year , principal amount ");
scanf("%f",&r);
scanf("%u",&y);
scanf("%u",&p);
simple_intrest(r,y,p);
}
