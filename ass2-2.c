#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("entered number is %d",x);
    x=x/10;
    printf("number without its unit digit %d",x);
    return 0;
}