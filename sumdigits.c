#include <stdio.h>
int main(){
  long long int num1, sum = 0;
  printf("Enter the number here : ");
  scanf("%lld", &num1);
  printf("You entered: %lld\n", num1);
  while ( num1 != 0) {
    sum += num1%10;
    num1 = num1/10;
  }
  printf("The sum of digits of the given number is : %lld\n", sum);
  return 0;
}
