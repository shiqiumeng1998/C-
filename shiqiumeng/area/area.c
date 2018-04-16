#include<stdio.h>
#define pi 3.1415926
void main()
{
    float r,area,l;
    printf("please input the first number:\n");
    scanf("%f",&r);
    area=pi*r*r;
    l=2*pi*r;
    printf("area=%f\nl=%f\n",area,l);
}
