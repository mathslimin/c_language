#include <stdio.h>

int main() {

    int var = 20;
    int *ip;
    /**
     * 指针 ip 指向 var
     * ip 的值也就是 var 变量存储的地址
     */
    ip = &var;

    printf( "var 变量的地址: %p\n", &var );
    printf( "ip 变量存储的地址: %p\n", ip );
    printf( "*ip 变量的值: %d\n", *ip );

    /** 空指针 **/
    int *ptr = NULL;
    printf( "ptr 的地址是: %p\n", ptr );

    return 0;
}
