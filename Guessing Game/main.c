#include <stdio.h>
#include <time.h>

int main(void) {

	int isPlaying = 0;
	
	printf("Welcome to Number Wizard\n");
	printf("Try and guess my number!\n\n");
	
	while(isPlaying == 0) {
		int choice;
		char again;
		int playAgain = 0;
		
		srand(NULL);
		int wizNum = (rand() % 100) + 1;
		
		
		while(playAgain == 0) {
			printf("Pick your number between 1 and 100!: ");
			scanf("%d",&choice);
		
			if(choice == wizNum) {
				printf("You are a Wizard!\nUou guessed it right!\n\n");
				printf("Play again? (y / n): ");
				scanf("%c", &again);
				
				if(again == 'n'){
					isPlaying = 1;
					break;
				}
				else {
					break;
				}
			}
			else if(choice < wizNum) {
				printf("\n\nYou picked too low!\n\n")
			}
			else if(choice > wizNum) {
				printf("\n\nYou picked too high!\n\n")
			}
		}	
	}
	
	return 0;
}