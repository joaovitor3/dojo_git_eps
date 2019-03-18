#include <stdio.h>

int mult (double a, double b){
	return a * b;
}

int soma(int &num1, int &num2){
  int result;
  result = *num1 + *num2;
  return result;
}

int sub(int a, int b){
	return a - b;
}

double div(double n1, double n2){
	return n1/n2;
}
