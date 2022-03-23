#include <stdio.h>

    //戻り値と引数のない関数
    void disp(void) {
    printf("こちらはdisp関数。戻り値も引数もありません\n");
    return;
    }

    //戻り値がint型で引数はfloat型の関数
    int sum(float a) {
    printf("こちらはsum関数。戻り値と引数があります\n");
    printf("引数aの値は%fです\n",a);
    // a *= 100;       //aに100を掛ける
    return(int)a;   //aの値を戻す
}

    int main(void) {
    
    //disp関数を呼び出す
    printf("disp関数をmainから呼び出します\n");
    disp();
    printf("disp関数から戻ってきました\n");

    //sum関数を呼び出す
    printf("sum関数をmainから呼び出します\n");
    int x = sum(1);
    printf("xの値は%dです\n",x);

    return 0;
}