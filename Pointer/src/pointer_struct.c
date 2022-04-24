
#include <stdio.h>
struct pencil
{
    int hardness;
    char marker;
    int number;
};
void main()
{

    struct pencil p[3];
    struct pencil * pen;
    p[0].hardness = 2;
    p[0].marker = 'F';
    p[0].number = 485;
    p[1].hardness = 0;
    p[1].marker = 'G';
    p[1].number = 38;
    p[2].hardness = 3;
    p[2].marker = '#';
    p[2].number = 108;
    printf("Hardness Marker Number\n");
    for (pen = p; pen <= p + 2; ++pen) {
        printf("%4d%8c%8d\n", (*pen).hardness, (*pen).marker, (*pen).number);
    }
}
