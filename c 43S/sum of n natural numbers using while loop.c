#include <stdio.h>

int naturalsum(int N);

void main(){
    int n;
    printf("\nEnter the number of natural numbers to be added from 1st: ");
    scanf("%d", &n);
    printf("\nSum of 1st %d natural numbers is: %d\n", n, naturalsum(n));
}

int naturalsum(int N){
    int sum = 0;
    while(N > 0){
        sum += N;
        N--;
    }
    return(sum);
}