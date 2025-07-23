#include <stdio.h>
int main() {
    int limit, sum = 0, i = 1;
    float avg = 0;
    printf("Enter the limit\t: ");
    scanf("%d", &limit);
    if (limit < 1){
        printf("Please enter a positive natural number\n");
        return 1;
    }
    while (i <= limit) {
        sum += i;
        i++;
    }
    avg = (float)sum/limit;
    printf("Sum of first %d natural numbers is %d\n", limit, sum);
    printf("Mean of the first %d natural numbers is %.2f\n", limit, avg);
    return 0;
}
