#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float x;
    printf("please input the first number:\n");
    scanf("%f",&a);
    if(a>=1000)
    {
       printf("please input the another number:\n");
       scanf("%f",&a);
    }
    else
    {
        x=sqrt(a);
        printf("a=%3.0f,x=%3.0f",a,x);
    }
}
