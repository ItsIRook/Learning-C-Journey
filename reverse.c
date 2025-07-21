#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("enter the number  of elements :");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elemnts : \n");;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0, j = n-1; i<j ; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("reversed array is : \n");
    for (i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}