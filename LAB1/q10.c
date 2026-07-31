#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, maxIndex = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    if (s == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Accept student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    // Display highest scorer
    printf("\nStudent with Highest Marks:\n");
    printf("Roll Number : %d\n", s[maxIndex].roll);
    printf("Name        : %s\n", s[maxIndex].name);
    printf("Marks       : %.2f\n", s[maxIndex].marks);

    // Free allocated memory
    free(s);

    return 0;
}