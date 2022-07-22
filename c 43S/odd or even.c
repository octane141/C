#include <stdio.h>

int oddevencheck(int N);

void main(){
    int n;
    printf("\nEnter the number to checked: ");
    scanf("%d", &n);
    if(oaddevencheck(n) == 1)
        printf("\n%d is an Even Number\n", n);
    else
        printf("\n%d is an Odd Number\n", n);
}

int oddevencheck(int N){
    if(N % 2 == 0)
        return(1);
    else
        return(0);
}