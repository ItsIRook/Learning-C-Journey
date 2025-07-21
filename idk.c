#include <stdio.h>

int main() {
    int blast[] = {1, 2, 3, 4, 5};
    int test, found = 0;
    printf("Enter a number to check if it's a blast: ");
    scanf("%d", &test);
     for (int i=0; i<5; i++) {
        if (test == blast[i]) {
            found = 1;
        }
     }

     if (found > 0) {
        printf("Yes, %d is a blast!\n", test);
     if (found == 0) {
        printf("No, %d is not a blast.\n", test);
     }
    return 0;
}
        

