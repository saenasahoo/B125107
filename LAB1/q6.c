#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];

    
    printf("Enter details of 5 students:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    
    printf("\n-------------------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n",
               s[i].name,
               s[i].roll,
               s[i].marks);
    }

    printf("-------------------------------------------\n");

    return 0;
}