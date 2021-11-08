#include <stdio.h>

int main() {
    
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;

    c = a & b;
    printf("a & b = %d\n", c);

    c = a | b;
    printf("a | b = %d\n", c);

    c = a ^ b;
    printf("a ^ b = %d\n", c);

    c = ~a;
    printf("~a = %d\n", c);

    c = a << 2;
    printf("a << 2 = %d\n", c);

    c = a >> 2;
    printf("a >> 2 = %d\n", c);

    return 0;
}
