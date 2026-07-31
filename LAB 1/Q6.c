//6. Student Structure
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];

    printf("\nEnter details of 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n---------------------------------------------\n");
    printf("Roll\tName\t\t\tMarks\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
