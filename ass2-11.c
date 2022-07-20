#include<stdio.h>
int main()
{
    int x,a;
    printf("enter any number");
    scanf("%d",&x);
    printf("\n enter a digit");
    scanf("%d",&a);
    x=x*10;
    x=x+a;
    printf("resultinf answer is %d",x);
    return 0;
}