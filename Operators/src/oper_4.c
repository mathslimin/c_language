#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 0;

    /**
     * 全部为真,输出真
     */
    if ( a && b ) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if ( a && c ) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    /**
     * 有一个真，输出真
     */
    if ( a || c ) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    /**
     * 真为假
     * 假为真
     */
    if ( !( a && c ) ) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
