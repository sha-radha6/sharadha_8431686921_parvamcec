#include <stdio.h>
int main()
{
    int arr[]={10,20,30,40,60,70,90,90,100};
    int length=0;
    while (arr[length]!='\0')
    {
        length++;
    }
    printf("length of the string is :%d\n\n",length-1);
    return 0;
}