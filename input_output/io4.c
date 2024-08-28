#include<stdio.h>
void main()
{
int int_v,success;
float f_v;
printf("enter int and float values \n");
success=scanf("%d%f",&int_v,&f_v);
printf("int value %d \n",int_v);
printf("f_v are %f \n",f_v);
printf("scanned feilds are %d",success);
}
