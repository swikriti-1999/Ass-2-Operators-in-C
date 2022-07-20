#include<stdio.h>
int main()
{
    int x;
    printf("enter a numebr");
    scanf("%d",&x);
    printf("\n entered numebr is %d",x);
    x=x/10;
    x=x*10;
    printf("\n last digit of entered number replaced by zero is %d",x);
    return 0;
}