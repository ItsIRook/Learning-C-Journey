#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade < 0 || grade > 100) {
        printf("Invalid grade. Please enter a grade between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }

    else if (grade >= 90) {
        printf("You received an A.\n");
    }
    else if (grade >= 80) {
        printf("You received a B.\n");
    }
    else if (grade >= 70) {
        printf("You received a C.\n");
    }
    else if (grade >= 60) {
        printf("You received a D.\n");
    }
    else {
        printf("You received an F.\n");
    }
    
}