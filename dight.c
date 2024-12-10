#include<stdio.h>
void main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int count = 0;
    int number1 = number;
    while(number>0)
    {
        number=number/10;
        count++;
    }
    if(count==1)
    {
        printf("%d is digit", number1);
    }
    else if (count==2)
    {
        printf("%d is a %d-digit number",number1,count);
    }
    else
    {
        printf("%d is a %d-digit number",number1,count);
    }
}