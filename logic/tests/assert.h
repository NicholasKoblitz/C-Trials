

int assert_eq(int a, int b) {
    if(a == b) {
        return 0;
    }
    else {
        return -1;
    }
}

int assert_ne(int a, int b) {
    if(a != b) {
        return 0;
    }
    else {
        return -1;
    }
}