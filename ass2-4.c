#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    printf("\n your entered numbers are %d %d", x,y);
    y=y-x;
    x=x+y;
    y=x-y;
    printf("swapped numbers are %d %d",x,y);
    return 0;
}