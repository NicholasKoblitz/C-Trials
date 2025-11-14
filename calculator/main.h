#pragma once


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

float pow(float a, int b) {
	for(int i = 0; i <= b; i++) {
		a *= a;
	}
}

int log(int logNum, int byNum) {
	int temp;
	int count = 0;
	while(temp < byNum) {
		temp *= logNum
		count++
	}
	return count;
}