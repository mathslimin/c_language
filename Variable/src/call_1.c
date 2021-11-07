#include <stdio.h>

/**
 * 编译方式:
 * gcc call_1.c call_2.c -o call
 */

extern int x;
extern int y;

int addtwonum() {
    return x + y;
}
