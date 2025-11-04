#include "main.h"

int main(void) {
	
	int isPlaying = 0;
	int players;

	printf("Welcome to Rock Paper Scissors\nHow many players? ( 1 or 2)\n");
	scanf("%d", &players);
	
	while(isPlaying == 0) {
		int choice;

		printf("Select one option:\n1 - Rock\n2 - Paper\n3 - Scissors\n");
		scanf("%d", &choice);
		CLEAR;
		srand(time(NULL));
		int input = (rand() % 3) + 1;

		play(choice, input);
			
	}
	
	return 0;
}