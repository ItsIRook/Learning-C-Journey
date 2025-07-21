#include <stdio.h>
#include <string.h>

int main() {
    int rnum, mark1, mark2, mark3, mark4, mark5, total, average;
    char name1[50],grade;
    printf("Enter roll number: ");
    scanf("%d", &rnum);
    printf("Roll number recieved successfully.\n");
    while (getchar() != '\n');
    printf("Enter name: ");
    fgets(name1,sizeof(name1),stdin);
    printf("Name recieved successfully.\n");
    printf("Enter marks for CHE101: ");
    scanf("%d", &mark1);
    printf("Marks for CHE101 recieved successfully.\n");
    while (getchar() != '\n');
    printf("Enter marks for PHY102: ");
    scanf("%d", &mark2);
    printf("Marks for PHY102 recieved successfully.\n");
    while (getchar() != '\n');
    printf("Enter marks for MAT103: ");
    scanf("%d", &mark3);
    printf("Marks for MAT103 recieved successfully.\n");
    while (getchar() != '\n');
    printf("Enter marks for BIO104: ");
    scanf("%d", &mark4);
    printf("Marks for BIO104 recieved successfully.\n");
    while (getchar() != '\n');
    printf("Enter marks for CS105: ");
    scanf("%d", &mark5);
    while (getchar() != '\n');
    printf("All data recieved successfully.\n");
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;
    switch (average / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }
    printf("Name: %s", name1);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %d\n", average);
    printf("Grade: %c\n", grade);
    return 0;
}