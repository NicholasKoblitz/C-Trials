#include "main.h"

int main(void) {
	
	bool isPlaying true;
	int players;
	
	printf(
		"Welcome to Rock Papar Scissors\n
		How many players? ( 1 or 2)"
	);
	
	scanf("%d", &players);
	
	while(isPlaying) {
		int choice;
		printf("
			Select one option:\n
			1 - Rock\n
			2 - Paper\n
			3 - Scissors\n
		");
		scanf("%d", &choice);
		
		srand(time(NULL)
		int rand = (rand() % 3) + 1;
		
		play(choice, rand);
			
		}
	
	return 0;
}