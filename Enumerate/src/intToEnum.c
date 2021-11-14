#include <stdio.h>
#include <stdlib.h>

int main() {

    enum day { 
        saturday, 
        sunday, 
        monday, 
        tuesday, 
        wednesday, 
        thursday, 
        friday 
    } workday;

    int a = 10;
    enum day weekend;
    weekend = ( enum day ) a;
    printf("weekend: %d\n", weekend);

    return 0;
}
