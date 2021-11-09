#include <stdio.h>

int max( int num1, int num2 );

int main() {
    int x, y;
    printf("输入两个数字: ");
    scanf("%d %d", &x, &y);
    int result = max(x, y);
    printf("result = %d\n", result);
    return 0;
}

int max( int num1, int num2 ) {
    return num1 > num2 ? num1 : num2;
}
