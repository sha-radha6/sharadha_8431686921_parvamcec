#include<stdio.h>
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>=1 && number <=12)
    {
        printf("valid month number");
    }
    else
    {
        printf("invalid month number");
    }
}