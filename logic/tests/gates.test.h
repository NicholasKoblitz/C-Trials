#pragma once
#include "../gates.h"
#include "assert.h"


void run_tests() {
    char test_1[] = assert_eq(inverter(0),1);
    char test_2[] = assert_eq(l_and(1,1),1);
    char test_3[] = assert_eq(l_and(1,0),0);
    char test_4[] = assert_ne(l_and(1,1),0);
	char test_5[] = assert_eq()


    printf("\nShould Invert the input\nInput: %d\nExpected Value: %d\nTest Pass: %s", 1,0,test_1);
    printf("\nShould Return 1\nInputs: %d and %d\nExpected Value: %d\nTest Pass: %s", 1,1,1, test_2);
    printf("\nShould Return 0\nInput: %d and %d\nExpected Value: %d\nTest Pass: %s", 1,0,0, test_3);
    printf("\nShould not Return 1\nInput: %d and %d\nExpected Value: %d\nTest Pass: %s", 1,1,0 test_4);
	printf("\nShould Return 1\nInputs %d and %d\nExpected Value: %d\nTest Pass")



}
