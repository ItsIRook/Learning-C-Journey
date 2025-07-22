#include <stdio.h>
int main() {
    int limit, sum = 0, i = 1;
    printf("Enter the limit\t: ");
    scanf("%d", &limit);
    if (limit < 1){
        printf("Please enter a postive natural number");
        return 1;
    }
    while (i <= limit) {
        sum += i;
        i++;
    }
    printf("Sum of first %d natuaral numbers is %d\n", limit, sum);
    return 0;
}
