#include<stdio.h>
int main()
{
    int num,x;
    printf("enter a number: ");
    scanf("%d",&num);
    x=num&1;
    if(x==0)
        printf("\n Entered number %d is even",num);
    else
        printf("\n Entered number %d is odd",num);
return 0 ;
}