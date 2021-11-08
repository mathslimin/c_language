#include <stdio.h>

int main() {

    int a = 21;
    int b = 10;
    int c;

    if ( a == b ) {
        printf("a = b\n");
    } else {
        printf("a != b\n");
    }

    if ( a < b ) {
        printf("a < b\n");
    } else {
        printf("a > b\n");
    }

    if ( a <= b ) {
        printf("a <= b\n");
    }

    if ( a >= b ) {
        printf("a >= b\n");
    }

    return 0;
}
