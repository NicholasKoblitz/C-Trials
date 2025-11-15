#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

typedef struct {
	int arr[MAX_SIZE];
	int top;
} Stack;


void init(Stack *stack) {
	stack -> top = -1;
}

void push(Stack *stack, int value) {
	if(stack -> top == MAX_SIZE - 1) {
		printf("Stack Overflow!\n");
		exit(1);
	}
	stack -> arr[++(stack -> top)] = value;
}

void pop(Stack *stack) {
	stack -> arr[(stack -> top)--];
}