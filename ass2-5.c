#include<stdio.h>
int main()
{
    int num,rem=0,sum=0,i;
    printf("enter a 3-digit number");
    scanf("%d",&num);
    printf("\n Entered number is %d",num);
    i=num;
    for(i=num;i>0;i=i/10)
    {
       rem=i%10;
       sum=sum+rem;
    }
    
    printf("\n Sum of the digits of entered number is %d",sum);

    return 0;
} 