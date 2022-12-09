#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float inputOne;
  float inputTwo;
  char operator;
  float result;

  printf("Enter a Number:\n\n");
  scanf("%f %c %f", &inputOne, &operator, &inputTwo);

  switch(operator)
    {
    case '/': result = inputOne/inputTwo;
      break;
    case '*': result = inputOne*inputTwo;
      break;
    case '+': result = inputOne+inputTwo;
      break;
    case '-': result = inputOne-inputTwo;
      break;
    case '^': result = pow(inputOne,inputTwo);
      break;
    case ' ': result = sqrt(inputTwo);
      break;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",inputOne, operator, inputTwo, result);
 exit:
  return 0;
}
