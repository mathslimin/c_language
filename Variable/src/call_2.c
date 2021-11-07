#include <stdio.h>

/**
 * 编译方式:
 * gcc call_1.c call_2.c -o call
 */

int x = 1;
int y = 2;

int addtwonum();

int main() {
    int result = addtwonum();
    printf("result: %d\n", result);
    return 0;
}

