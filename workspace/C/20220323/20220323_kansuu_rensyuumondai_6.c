#include <stdio.h>
    void calc(int x, int y) {
        int z = x * y;
        printf("bの値は%d\nです",z);
    }

    int main(void) {
        int a;
        //int b;
        a = 20;
        for(int i = 0; i < 10; i++) {
            calc(a,i);
            // b = a * i;
            // printf("bの値は%d\nです",b);
        }
    
    return 0;
}