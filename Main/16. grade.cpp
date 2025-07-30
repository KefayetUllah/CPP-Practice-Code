#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    int grade = marks / 10;  // This converts 90–100 to 9/10, 80–89 to 8, etc.

    switch (grade) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}
