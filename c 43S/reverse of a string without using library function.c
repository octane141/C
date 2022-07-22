#include <stdio.h>
#include <string.h>

//main function
void main(){
    char a[100],b[100];
    printf("\nEnter the string: ");
    gets(a);
    int s=strlen(a);
    for(int i=0,j=(s-1);i<s && j>=0;i++,j--)
        b[i]=a[j];
    printf("\nOriginal string: %s\n", a);
    printf("\nReversed string: %s\n", b);
}