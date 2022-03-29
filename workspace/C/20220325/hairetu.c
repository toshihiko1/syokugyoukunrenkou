#include <stdio.h>
int main(void) {
    char s1[4] = "LSS";
    printf("s1の中身は、%sです\n",s1);//文字列を表示
    char s2[] = "LSS";
    unsigned long s2Num = sizeof(s2) / sizeof(s2[0]);
    printf("s2の要素数は%luです\n", s2Num);
    char ms1[] = "アカデミー";
    printf("ms1の要素数は%luです\n", sizeof(ms1) / sizeof(ms1[0]));

    // char str[] = "Hello";
    // for(int i = 0; str[i] != '\0'; i++) {
    //     printf("%c*", str[i]);
    // }
    // printf("\n");

    //章末問題
    //b,b,4途中で=は使えない,b,c

    return 0;
}