#include "main.h"


int main(void) {
	char expression[256];
	bool isCal = true;

	printf("\n\n****************************************************************\n");
	printf("*                                                              *\n");
	printf("* This is a simple calculator program. Only basic operations   *\n");
	printf("* will run, and any other will cause an error.                 *\n");
	printf("*                                                              *\n");
	printf("****************************************************************\n\n");

	while(isCal) {
		float total = calculate();

		if(total == __FLT_MAX__) {
			exit(1);
		}
	}

	return 0;
}