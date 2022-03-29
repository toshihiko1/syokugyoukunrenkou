#include <stdio.h>
int main(void) {
    char str2[] = "This is a pen.";
    unsigned long str2Num = sizeof(str2) / sizeof(str2[0]);
    printf("%s%lu", str2, str2Num);
    return 0;
}