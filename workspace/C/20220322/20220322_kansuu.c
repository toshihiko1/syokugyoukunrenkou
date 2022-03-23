#include <stdio.h>
    void disp(void) {
        printf("こちらはdisp関数。戻り値も引数もありません\n");
    return;
    }

    int main(void) {
        printf("disp関数をmainから呼び出します\n");
        disp();
    return 0;
}