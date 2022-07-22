#include <stdio.h>

void main()
{
    int m, n, *ptr, x, sum = 0;
    float mean;
    printf("\nEnter the begining and ending numbers, respectively:\n");
    scanf("%d %d", &m, &n);
    x = m;
    while (x >= m && x <= n)
    {
        ptr = &x;
        sum = sum + *ptr;
        x++;
    }
    mean = (float)sum / (n - m);
    printf("\nMean=%f\n", mean);
}