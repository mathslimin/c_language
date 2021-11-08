#include <stdio.h>

int main() {

    int c;
    int a = 10;
    c = a++;
    printf("先赋值后运算: \n");

    printf("\ta++\t\n");
    printf("1 - c: %d\n", c);
    printf("1 - a: %d\n", a);
    
    printf("\ta--\t\n");
    a = 10;
    c = a--;
    printf("2 - c: %d\n", c);
    printf("2 - a: %d\n", a);

    printf("先运算后赋值: \n");

    printf("\t++a\t\n");
    a = 10;
    c = ++a;
    printf("3 - c: %d\n", c);
    printf("3 - a: %d\n", a);

    printf("\t--a\t\n");
    a = 10;
    c = --a;
    printf("4 - c: %d\n", c);
    printf("4 - a: %d\n", a);


    return 0;
}

