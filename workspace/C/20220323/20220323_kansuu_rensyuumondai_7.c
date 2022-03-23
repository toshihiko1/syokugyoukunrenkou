#include <stdio.h>
    void hikaku(int x, int y) {
        if(x == y) {
            printf("二つは同じ\n");
        }else if(x > y){
            printf("a1の方が大きい\n");
        }else{
            printf("a2の方が大きい\n");
        }
    }

    int main(void) {
        int a1,a2;
        //二つの整数値を入力
        scanf("%d",&a1);
        scanf("%d",&a2);
        hikaku(a1,a2);
        //ここから
        // if(a1 == a2) {
        //     printf("二つは同じ\n");
        // }else if(a1 > a2){
        //     printf("a1の方が大きい\n");
        // }else{
        //     printf("a2の方が大きい\n");
        // }
        //ここまで
    return 0;
}