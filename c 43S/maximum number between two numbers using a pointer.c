#include <stdio.h>

void main()
{
    int x, *ptr_x, y, *ptr_y;
    printf("\nEnter the 2 numbers:\n");
    scanf("%d %d", &x, &y);
    ptr_x = &x;
    ptr_y = &y;
    if (*ptr_x > *ptr_y)
        printf("\n%d is the greatest.\n", x);
    else
        printf("\n%d is the greatest.\n", y);
}