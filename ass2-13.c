#include<stdio.h>
int main()
{
    int num,rem=0,quot=0;
    printf("\n Enter a 3-digit number");
    scanf("%d",&num);
    printf("\n Enytered number is : %d",num);
    rem=num%10;
    quot=num/10;
    num=(rem*100)+quot; 
    printf("\n NUmber rotated by 1 place %d",num);
return 0;
}