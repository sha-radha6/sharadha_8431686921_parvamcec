#include<stdio.h>
int main()
{
    char ch ='a';
    printf("the ASCII value of'%c' is %d\n",ch,ch);
    ch = ch-32;
    printf("the converted upppercase letter is:'%c'\n",ch);
    return 0;
}