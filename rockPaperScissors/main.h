#pragma once;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK     1;
#define PAPER    2;
#define SCISSOR  3;



int play(int input, int enemy) {
	
	
	
	switch(input) {
		case 1:
			rock(enemy);
			break;
		case 2:
			paper(enemy);
			break;
		case 3:
			scissors(enemy);
			break;	
	}
}


const char* rock(int input) {
	if(input == 1) {
		return "Tie!";
	}
	else if(input == 2) {
		return "Player 1 lost";
	}
	else if(input == 3) {
		return "Player 2 lost";
	}
}


const char* paper(int input) {
	if(input == 1) {
		return "Player 1 lost";
	}
	else if(input == 2) {
		return "Tie!";
	}
	else if(input == 3) {
		return "Player 2 lost";
	}
}


const char* scissors(int input) {
	if(input == 1) {
		return "Player 2 lost";
	}
	else if(input == 2) {
		return "Player 1 lost";
	}
	else if(input == 3) {
		return "Tie!";
	}
}