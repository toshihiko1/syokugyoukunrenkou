#include <stdio.h>
int main(void) {

    int i;
    int num[] = {1,2,3,4,5};
    int *a = num;

    for(i = 0; i < 5; i++) {
    printf("%d", *a++);
    printf("%d", num[0]);
    }

    printf("%d", num[0]);

    return 0;
}
