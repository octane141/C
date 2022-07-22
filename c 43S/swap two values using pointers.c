#include <stdio.h>

void main()
{
    int x, *ptr_x, y, *ptr_y;
    printf("\nEnter the 2 numbers:\n");
    scanf("%d %d", &x, &y);
    ptr_x = &x;
    ptr_y = &y;
    printf("\nOriginal Number:-\n");
    printf("x=%d , y=%d\n", x, y);
    int temp = *ptr_y;
    *ptr_y = *ptr_x;
    *ptr_x = temp;
    printf("\nModified Number:-\n");
    printf("x=%d , y=%d\n", x, y);
}