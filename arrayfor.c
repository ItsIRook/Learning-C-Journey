#include <stdio.h>

int main() {
    int limit, dislimit;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &limit);
    int marks[limit];
    for (int i = 0; i<limit; i++) {
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", marks + i);
    }
    printf("Enter the number of elements to display: ");
    scanf("%d", &dislimit);
    printf("The marks of the first %d students are: \n", dislimit);
    for (int i = 0; i<limit; i++) {
        if (i < dislimit) {
            printf("Student %d: %d\n", i+1, marks[i]);
        }
    }
}