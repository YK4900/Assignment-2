#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

int unaryToDecimal(char number[MAX]) {
  int counter = 0;
  for(int i = 0; i<MAX; i++)
    if(number[i] == 'I')
      counter++;

  return counter;
}

char *decimalToUnary(int n) {

  char *number = (char *) malloc((n+1) * sizeof(char));

  for(int i = 0; i<n; i++)
    number[i] = 'I';

  number[n] = '\0';
  return number;

}

int add(int num1, int num2) {
  return num1 + num2;
}

int multiply(int num1, int num2) {
  return num1*num2;
}

int main() {

  char inputNum1[MAX] = {0}, inputNum2[MAX] = {0};
  int num1, num2;
  
  printf("Enter number 1: ");
  scanf("%s", inputNum1);
  num1 = unaryToDecimal(inputNum1);

  printf("Enter number 2: ");
  scanf("%s", inputNum2);
  num2 = unaryToDecimal(inputNum2);

  int n;
  printf("\n");
  printf("1. Addition\n");
  printf("2. Multiplication\n");
  printf("Enter operation 1/2: ");
  scanf("%d", &n);

  char *result;
  switch(n) {
    case 1:
      result = decimalToUnary(add(num1, num2));
      printf("Result: %s\n", result);
      break;
    
    case 2:
      result = decimalToUnary(multiply(num1, num2));
      printf("Result: %s\n", result);
      break;

    default:
      printf("Invalid Operation\n");
      return 0;
      break;
  }
  free(result);
  return 0;
}
