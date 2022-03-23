#include <stdio.h>
    
    float halfValue(int a); //プトタイプ宣言

    int main(void) {
        //halfValue関数を呼び出す
        float x = halfValue(7);
        printf("の値は%fです", x);
        return 0;
    }
    //受け取った引数の値を半分にして返す関数
    float halfValue(int a) {
        return (float) a / 2.0;
}