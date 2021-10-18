#include <stdio.h>

int add(int num1, int num2) {
  return num1 + num2;
}

int multiply(int num1, int num2) {
  return num1*num2;
}

int main() {

  int num1, num2;
  
  printf("Enter number 1: ");
  scanf("%d", &num1);

  printf("Enter number 2: ");
  scanf("%d", &num2);

  int n;
  printf("\n");
  printf("1. Addition\n");
  printf("2. Multiplication\n");
  printf("Enter operation 1/2: ");
  scanf("%d", &n);

  switch(n) {
    case 1:
      printf("Result: %d\n", add(num1, num2));
      break;
    
    case 2:
      printf("Result: %d\n", multiply(num1, num2));
      break;

    default:
      printf("Invalid Operation\n");
      return 0;
      break;
  }

  return 0;
}
