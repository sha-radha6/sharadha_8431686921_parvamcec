#include<stdio.h>
void swapbyreferance(int *a,int *b)
{
    int c=*a;//c =10
    *a=*b;//a=20
    *b=c;//b=10
}
int main()
{
    int x=10,y=20;
    printf("before swap x=%d and y=%d\n",x,y);
    swapbyreferance (&x,&y);
    printf("after the swapx=%d and y=%d",x,y);
    return 0;
     }