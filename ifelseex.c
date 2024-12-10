#include<stdio.h>
int main()
{
    int number=0;
    printf("enter the number:");
    scanf("%d",&number);
    if (number>0)
    {printf("%d is positive number",number);}
else
{
    printf("%d is negative number",number);
}
}