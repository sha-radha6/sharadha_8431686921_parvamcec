#include<stdio.h>
int sum(int,int);
int main()
{
    int a=0;
    int b=0;
    int total=0;
    printf("enter a first numbeer:");
    scanf("%d",&a);
    printf("enter a second number:");
    scanf("%d",&b);
    total = sum(a,b);
    printf("sum is:%d",total);
    return 0;
}
int sum(int a,int b){
    int s=0;
    s=a+b;
    return s;
}
