#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter two numebr");
    scanf("%d %d",&x,&y);
    printf("entered numbers are %d and %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\n swapped numbers are %d %d",x,y);
    return 0;
}