#include <stdio.h> 
int main(void) {
    int a = 1;
    double syohi_zei;
    char c1,c2;
    float total;

    a = 2;
    syohi_zei = 0.08;
    c1 = 'a';
    c2 = 'Z';
    total = 360.6;

    printf("変数aの中身は%dです\n",a);
    printf("変数syohi_zeiの中身は%.2lfです\n",syohi_zei);
    printf("c1=%c\nc2=%c\n",c1,c2);

    return 0;
}