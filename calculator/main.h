#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>


float add(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a - b;
}

float multi(float a, float b) {
	return a * b;
}

float divide(float a, float b) {
	return a / b;
}

float powr(float a, int b) {
	for(int i = 0; i <= b; i++) {
		a *= a;
	}
}

int logt(int logNum, int byNum) {
	int temp;
	int count = 0;
	while(temp < byNum) {
		temp *= logNum;
		count++;
	}
	return count;
}

float calculate(void) {
	float num1;
	char op;
	float num2;
	float total;

	printf("Enter the first number: ");
	scanf("%d", &num1);

	// Put a space before %c to get the \n that is entered after the number
	// of the previous scanf.
	printf("\nEnter the operator: ");
	scanf(" %c", &op);

	printf("\nEnter the second number: ");
	scanf("%d", &num2);

	switch(op) {
		case '+':
			total = add(num1,num2);
			break;
		case '-':
			total = sub(num1,num2);
			break;
		case '*':
			total = multi(num1,num2);
			break;
		case '/':
			total = divide(num1,num2);
			break;
		default:
			printf("\nYou didn't but in any valid operators.\n\n");
			total = __FLT_MAX__;
			break;
	}

	return total;
}

