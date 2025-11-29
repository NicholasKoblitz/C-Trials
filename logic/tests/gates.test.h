#pragma once
#include "../gates.h"
#include "assert.h"


void run_tests() {
    int test_invertor = assert_eq(inverter(0),1);
    int test_and_true_1 = assert_eq(l_and(1,1),1);
    int test_and_true_0 = assert_eq(l_and(1,0),0);
    int test_and_false = assert_ne(l_and(1,1),0);


    printf("\nTEST 1\nInput: %d\nTest Value: %d\n", 1, test_invertor);
    printf("\nTEST 2\nInputs: %d and %d\nTest Value: %d\n", 1,1, test_and_true_1);
    printf("\nTEST 3\nInput: %d and %d\nTest Value: %d\n", 1,0, test_and_true_0);
    printf("\nTEST 3\nInput: %d and %d\nTest Value: %d\n", 1,1, test_and_false);



}
