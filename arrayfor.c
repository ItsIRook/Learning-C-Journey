#include <stdio.h>

int main() {
    int limit, dislimit;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &limit) !=1 || limit <=0) {
        printf("Invalid input for number of elements. \n");
        return 1;
    }
    int marks[limit];
    for (int i = 0; i<limit; i++) {
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", marks + i);
    }
    printf("Enter the number of elements to display: ");
    scanf("%d", &dislimit);
    if (dislimit > limit) {
        printf("The number of element to display is greater than number of elements int the array. \n Please try again");
            }
    else {
        printf("The marks of the first %d students are: \n", dislimit);
        for (int i = 0; i<limit; i++) {
            if (i < dislimit) {
                printf("Student %d: %d\n", i+1, marks[i]);
            }
        }
    }
    return 0;
}
