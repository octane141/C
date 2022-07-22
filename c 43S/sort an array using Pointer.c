#include <stdio.h>

void main()
{
    int *a, n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }
    printf("\nOriginal Array:-\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                int tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
            else
                continue;
        }
    }
    printf("\nSorted Array:-\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}