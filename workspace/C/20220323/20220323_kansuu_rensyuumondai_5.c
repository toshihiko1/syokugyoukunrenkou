#include <stdio.h>
    void dispWa(int x) {
        printf("総和 = %d\n", x);
    }

    int main(void) {
        int wa = 0;
        for(int i = 0; i <= 100; i++) {
            wa = wa + i;
            //printf("総和 = %d\n", x);
            dispWa(wa);
        }
    
    return 0;
}