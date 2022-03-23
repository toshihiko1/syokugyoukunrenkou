#include <stdio.h>
int main(void) {
    //4
    int sum = 0;
    int num = 0;
    
    ///for文
    for(num = 1; num <= 100; num++) {
        sum += num; 
    }
    printf("合計=%d\n",sum);

    sum = 0;
    num = 1;


    //while文
    while(num <= 100){
        sum += num;
        num++;
    }
    printf("合計=%d\n",sum);

    sum = 0;
    num = 0;

    //do while文
    do{
        num++;
        sum += num;
    }while(num < 100);

    printf("合計=%d\n",sum);

    //5
    // int num;
    // printf("整数を入力");
    // scanf("%d",&num);
    // if(num <= 0) {
    //     printf("エラー");
    // }
    // while(num > 0){
    // printf("*");
    // num--;
    // }
    // printf("\n");

    return 0;
}