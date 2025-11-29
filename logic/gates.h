#pragma once
#include <stdio.h>



int inverter(int a) {
    switch(a) {
        case 0:
            return 1;
            break;
        case 1:
            return 0;
            break;
        default:
            fprintf(stderr, "Not a Valid input");
            return -1;
            break;
    }
}

int l_and(int a, int b) {
    if(a == 1 && b == 1) {
        return 1;
    }
    else if((a < 0 || a > 1) || (b < 0 || b > 1)) {
        return -1;
    }
    else {
        return 0;
    }
}

int l_or(int a, int b) {
    
}