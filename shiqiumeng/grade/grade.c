#include<stdio.h>
void main()
{
    float x;
    printf("please input your grade:\n");
    scanf("%f",&x);
    if(x>=90)printf("A\n");
    else if(x>=80)printf("B\n");
    else if(x>=70)printf("C\n");
    else if(x>=60)printf("D\n");
    else printf("E\n");
}
