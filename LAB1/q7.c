#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int maxIndex = 0;
    float sum = 0, avg;

    
    printf("Enter details of 5 students:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;

        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }

        printf("\n");
    }

    
    avg = sum / 5;


    printf("\nStudent with Highest Marks\n");
    
    printf("Name  : %s\n", s[maxIndex].name);
    printf("Roll  : %d\n", s[maxIndex].roll);
    printf("Marks : %.2f\n", s[maxIndex].marks);


    printf("\nAverage Marks = %.2f\n", avg);

    return 0;
}