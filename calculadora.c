#include <stdio.h>

int sum(int num1, int num2){
  int result;
  result = num1 + num2;
  return result;
}

int subtraction(int a, int b) {
  int result;
  result = a-b;
	return result;
}

double divider(double n1, double n2){
  double result;
  result = n1/n2;
	return result;
}

int mult (double a, double b){
	return a * b;
}


int main(){
  int num1, num2, soma, subt;
  double n1, n2, d;

  num1 = 2;
  num2 = 3;

  n1 = 10.0;
  n2 = 2.0;

  soma = sum(num1, num2);
  subt = subtraction(num2, num1);
  d = divider(n1,n2);

  return 0;
}
