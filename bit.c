#include<stdio.h>
int main()
{
   int x,y,r;
   printf("enter two number");
   scanf("%d%d",&x,&y);
   r=x&y;
   printf("result =%d",r);
   return 0;
}