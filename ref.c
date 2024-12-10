#include<stdio.h>
void swapByreferanc(int *a,int *b)
{
    int c=*a;//c=10
    *a=*b;//a=20
    *b=c;//b=10
}
void swapByvalue(int a,int b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int x=10,y=20;
    //callbyreferance
    printf("before the swap x=%d and y=%d\n",x,y);
    swapByreferance(&x,&y);
    printf("after the swap x=%d and y=%d",x,y);
    //callbyvalue
    printf("before the swap x=%d amd y=%d\n",x,y);
    swapByvalue(x,y);
    printf("after the swap x=%d and y=%d",x,y);
    return 0;
}