#include<stdio.h>
int main()
{
    int x;
    printf("enter a number number");
    scanf("%d",&x);
    printf("entered number is %d",x);
    x=x%10;
    printf("\n number in unit place of enterd number is %d",x);
    return 0;
}