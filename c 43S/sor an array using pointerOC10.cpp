#include <stdio.h>
 
void sort(int n, int* ptr)
{
    int i, j, t;
 
    
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++) {
 
            if (*(ptr + j) < *(ptr + i)) {
 
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
 
    
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
 
int main()
{
    int n,x;
    int arr[n];
    printf ("enter the number of array elements ");
    scanf ("%d",&n);
printf ("\n enter array elemnts");
x=0;
while (x<n)
{

scanf ("%d",&arr[x]);
x++;

}
 
    sort(n, arr);
 
    return 0;
}
