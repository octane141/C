#include <stdio.h>

int numreversal(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n == numreversal(n))
        printf("\n%d is a Palindrome Number\n", n);
    else
        printf("\n%d is not a Palindrome Number\n", n);
}

int numreversal(int N){
    int reverse = 0;
    while(N > 0){
        reverse = (reverse * 10) + (N % 10);
        N = N / 10;
    }
    return(reverse);
}