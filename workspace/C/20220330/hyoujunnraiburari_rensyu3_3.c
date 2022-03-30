#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        int ransu = rand();
        ransu = ransu % 80;
        for(int i2 = 0; i2 < ransu; i2++) {
            printf("*");
            }
            printf("%d\n", i);
        }

    return 0;
}
