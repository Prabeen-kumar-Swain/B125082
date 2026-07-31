//10. Dynamic Student Records
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highest].marks)
            highest = i;
    }

    printf("\nHighest marks is scored by: \n");

    printf("Roll Number : %d\n", s[highest].roll);
    printf("Name        : %s\n", s[highest].name);
    printf("Marks       : %.2f\n", s[highest].marks);

    free(s);

    return 0;
}
