#include <stdio.h>
#include <math.h>

int armstrongcheck(int N);

void main(){
    int n = 0;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(armstrongcheck(n) == 1)
        printf("\n%d is an Armstrong Number\n", n);
    else
        printf("\n%d is not an Armstrong Number\n", n);
}

int armstrongcheck(int N){
    int dup = N, sum = 0, flag = 0;
    while(dup > 0){
        flag++;
        dup = dup / 10;
    }
    dup = N;
    while(dup > 0){
        sum += (int)pow((dup % 10), flag);
        dup = dup / 10;
    }
    if(sum == N)
        return(1);
    else
        return(0);
}