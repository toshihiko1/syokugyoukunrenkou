#include<stdio.h>
//静的変数

int count(void);
int main(void) {
    int i;
    for(int i = 1; i <= 5; i++) {
        printf("count関数:%d回目\n",count());
    }
    return 0;
}

//呼ばれた回数を返却する
//引数なし
//戻り値呼ばれた回数
int count(void) {
    static int c; //初期値0
    c++;
    return c;
}