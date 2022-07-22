#include <stdio.h>
#include <stdlib.h>

//main function
void main(){
    int r,c,R,C;
    printf("\nEnter the rows and columns of the original matrix, respectively:\n");
    scanf("%d %d", &r, &c);
    if(r>c)
        R=C=r;
    else if(c>r)
        R=C=c;
    else if(r==c)
        R=C=r;
    int *a=(int *)malloc(R*C*sizeof(int));
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            *(a+i*C+j)=0;
    }
    printf("\nEnter the matrix values:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int x;
            scanf("%d", &x);
            *(a+i*c+j)=x;
        }
    }
    printf("\nOriginal Matrix:-\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(*(a+i*C+j)!=0)
                printf("%d  ", *(a+i*C+j));
        }
        printf("\n");
    }
    int *b=(int *)malloc(R*C*sizeof(int));
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            *(b+j*C+i)=*(a+i*C+j);
    }
    printf("\nTransposed Matrix:-\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(*(b+i*C+j)!=0)
                printf("%d  ", *(b+i*C+j));
        }
        printf("\n");
    }
}