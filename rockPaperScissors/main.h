#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#if _WIN32
	#define CLEAR system("cls")

#elif __linux__
	#define CLEAR system("clear")

#endif



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


const char* play(int input, int enemy) {
	CLEAR;
	switch(input) {
		case 1:
			printf("\n %s\n", rock(enemy));
			break;
		case 2:
			printf("\n %s\n", paper(enemy));;
			break;
		case 3:
			printf("\n %s\n", scissors(enemy));
			break;	
	}
}