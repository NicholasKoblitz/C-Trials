#include <string.h>
#include "main.h"
#include "stack.h"


int main(void) {
	
	char expression[MAX_SIZE];
	Stack stack;
	init(&stack);
	int isCal = 0;
	
	printf("Enter Expression: \n");
	scanf("%s", expression);
	int len = strlen(expression);
	
	return 0;
}