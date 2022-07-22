#include <stdio.h>

float bookpriceadd(float P1, float P2, float P3);

void main(){
    printf("\nEnter the price of 3 books:\n");
    float p1, p2, p3;
    scanf("%f %f %f", &p1, &p2, &p3);
    printf("\nThe net price of the 3 books is: %1.2f", bookpriceadd(p1, p2, p3));
}

float bookpriceadd(float P1, float P2, float P3){
    return(P1 + P2 + P3);
}