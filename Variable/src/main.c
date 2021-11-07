#include <stdio.h>

/**
 * 函数外定义变量 x 和 y
 * 这是全局变量
 *
 * 这种定义方式等价于下面
 * int x;
 * int y;
 *
 */
int x, y;

int addtwonum() {

    /**
     * 给全局变量(外部变量) x y 赋值
     */ 
    x = 1;
    y = 2;
    return x + y;
}

int main() {
    /**
     * int result;
     * result = addtwonum();
     * 等价于
     * int result = addtwonum();
     */
    int result = addtwonum();

    printf("result: %d\n", result);
    return 0;
}
