#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // if else
    if ( a < b) {
        printf("a is greater than b\n");
    }
    else {
        printf("b is greater than a\n");
    }

    // switch case structure
    switch (a) {
        case 10:
            printf("value is 10"); break;
        case 11:
            printf("value is 11"); break;
        default:
            printf("Unexpected value"); break;
    };



    return 0;
}