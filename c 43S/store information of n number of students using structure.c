#include <stdio.h>

struct studentdets{
    char name[100];
    int roll;
    float marks;
}sd[100];

void main(){
    int n;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Student %d:\n",i+1);
        printf("Enter the name of the student: ");
        scanf("%s", &sd[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &sd[i].roll);
        printf("Enter the marks of the student: ");
        scanf("%f", &sd[i].marks);
    }
    printf("\nData of %d students saved in the data base:-\n", n);
    for(int i=0;i<n;i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", sd[i].name);
        printf("Roll No.: %d\n", sd[i].roll);
        printf("Marks: %f\n", sd[i].marks);
    }
}