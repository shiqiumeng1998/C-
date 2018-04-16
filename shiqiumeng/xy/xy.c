#include<stdio.h>
#include<math.h>
void main()
{
    int y;
    int x;
    printf("please input the first number:\n");
    scanf("%d,&x");
    if(x<0)
        y=x;
    else if(x>=1&&x<10)
        y=2*x+1;
    else if(x>=10)
        y=3*x-11;
    printf("y=%d",y);
}
