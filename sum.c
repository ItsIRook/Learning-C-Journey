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
    avg = sum/limit;
    printf("Sum of first %d natural numbers is %d\n", limit, sum);
    print("Mean of the first %d natural numbers is %d\n", limit, avg);
    return 0;
}
