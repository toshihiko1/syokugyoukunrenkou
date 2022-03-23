#include <stdio.h>
int main(void) {
    printf("1+2は%dです\n", 1 + 2);
    printf("5から3を引くと%dです\n", 5 - 3);
    printf("2×5は%dです\n", 2 * 5);
    printf("9割る3は%dです\n", 9 / 3);
    printf("7を2で割ったあまりは%dです\n", 7 % 2);
    
    // int a = 100;
    // int b = 200;
    // int c = a + b;
    // printf("a + bは%dです\n", c);

    int a = 1;
    int b = 2;
    a++;
    printf("変数aの値は%dです\n", a);
    b--;
    printf("変数bの値は%dです\n", b);

    a = 5;
    printf("変数a1の値は%dです\n", a);
    a++;
    printf("変数a1の値は%dです\n", a);
    a--;
    printf("変数a1の値は%dです\n", a);
    return 0;
}