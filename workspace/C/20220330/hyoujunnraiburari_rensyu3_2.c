#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        int ransu = rand();
        ransu = ransu / 50000000;
        for(int i2 = 0; i2 < ransu; i2++) {
            printf("*");
                if(i2 == 80){
                 break;
            }
        }
        printf("%d\n",i);
    }

    return 0;
}
