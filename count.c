#include<stdio.h>
int countdigits(int);
int main()
{
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    int sum=0;
    sum= countdigits(number);
    printf("count of %d is=%d",number,sum);
    return 0;
}
int countdigits(int num)
{
    static int count =0;
    if (num!=0)
    {
        count++;
        countdigits(num/10);
    }
    else
    {    
    return count;
    }
}