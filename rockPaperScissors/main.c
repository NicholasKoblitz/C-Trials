#include "main.h"

int main(void) {
	
	int isPlaying = 0;
	int players;

	printf("Welcome to Rock Paper Scissors\nHow many players? ( 1 or 2)\n");
	scanf("%d", &players);
	
	while(isPlaying == 0) {
		if(players == 1) {
			int choice;
			printf("\n\nSelect one option:\n1 - Rock\n2 - Paper\n3 - Scissors\n");
			scanf("%d", &choice);
			CLEAR;
			srand(time(NULL));
			int input = (rand() % 3) + 1;

			play(choice, input);
		}
		else if(players == 2) {
			int player1;
			int player2;

			printf("Player 1 select one option:\n1 - Rock\n2 - Paper\n3 - Scissors\n");
			scanf("%d", &player1);
			CLEAR;
			printf("Player 2 select one option:\n1 - Rock\n2 - Paper\n3 - Scissors\n");
			scanf("%d", &player2);
			CLEAR;

			play(player1,player2);
		}
		
			
	}
	
	return 0;
}