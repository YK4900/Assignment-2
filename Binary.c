#include <stdio.h>
#include <stdlib.h>

#define MAX 2000

int lg(int n) {
  return (n > 1) ? (1 + lg(n/2)) : 0;
}

int binaryToDecimal(char number[MAX]) {
  int counter = 0;
  for(int i = 0; i<MAX; i++) {
    if(number[i] == '1') {
      counter*=2;
      counter+=1;
    } else if (number[i] == '0')
      counter*=2;
  }

  return counter;
}

char *decimalToBinary(int n) {

  int size = lg(n) + 1;
  char *number = (char *) malloc((size + 1) * sizeof(char));

  for(int i = size-1; i>=0; i--) {
    number[i] = (n%2) + '0';
    n/=2;
  }

  number[size] = '\0';
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
  num1 = binaryToDecimal(inputNum1);

  printf("Enter number 2: ");
  scanf("%s", inputNum2);
  num2 = binaryToDecimal(inputNum2);

  int n;
  printf("\n");
  printf("1. Addition\n");
  printf("2. Multiplication\n");
  printf("Enter operation 1/2: ");
  scanf("%d", &n);

  char *result;
  switch(n) {
    case 1:
      result = decimalToBinary(add(num1, num2));
      printf("Result: %s\n", result);
      break;
    
    case 2:
      result = decimalToBinary(multiply(num1, num2));
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
