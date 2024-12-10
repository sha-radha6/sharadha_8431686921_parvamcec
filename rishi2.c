#include<stdio.h>
int main()
{
 int x,y,result;
 printf("enter two no");
 scanf("%d%d",&x,&y);
 result=x>y?x:y;
 printf("biggest=%d",result);
 return 0;
}