#include <stdio.h>

/**
 * 定义常量
 *
 * 1. 使用 #define 预处理器
 * 2. 使用 const 关键字
 *
 */

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main() {

    int area;

    area = LENGTH * WIDTH;
    printf("value of area: %d\n", area);
    printf("%c", NEWLINE);

    return 0;
}
