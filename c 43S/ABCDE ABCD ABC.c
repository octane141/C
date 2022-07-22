#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    int a=65+n;
    for(int i=0;i<n;i++){
        for(int j=65;j<a;j++)
            printf("%c  ", j);
        a--;
        printf("\n");
    }
}