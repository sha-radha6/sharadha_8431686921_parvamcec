#include <stdio.h>
void swapPointer(int **room1,int**room2)
{
    int *temp=*room1;
    *room1=*room2;
    *room2=temp;
}
int main()
{
    int guest1=101;
    int guest2=202;
    int *room1=&guest1;
    int *room2=&guest2;
    printf("before swapping:\n");
    printf("room 1 points to guest with ID: %d\n",*room1);
    printf("room 2 points to guest with ID: %d\n",*room2);
    swapPointer(&room1,&room2);
    printf("\nAfter swapping:\n");
    printf("room 1 points to guest with ID:%d\n",*room1);
    printf("room 2 points to guest with ID:%d\n",*room2);
    return 0;
}