#include <stdio.h>


    //1:break
    //2:while(),for(;1;)
    //3:i <= 10
    //4for();
    //510
    //6d
    //7{}
    //8d
    //9a

    //1 int (int x)
    //3 2行目
    // int count = 10;
    // int num[10];
    // int total = 0;
    // printf("1から10までの数字を入力\n");
    // for(int i = 0; i < count; i++) {
    //     scanf("%d",&num[i]);
    // }
    
    // for(int i = 0; i < count; i++) {
    //     total += num[i]; 
    // }
    // printf("%d", total);


    
// void disp(void){
//     printf("こちらはdisp関数。戻り値も引数もありません\n");
//     return;
// }

// int sum(float a) {
//     printf("こちらはsum関数。戻り値と引数があります\n");
//     printf("引数aの値は%fです\n",a);
//     a *= 100;
//     return(int)a;
// }
// int func(int x) {
//     x *= 2;
//     return(int) x;
// }

    float calc (int x,int y) {
        float z = (x + y) / 2.0;
        return z;
    }

int main(int argc, const char * argv[])
{
//     printf("dispから関数をmainから呼び出します\n");
//     disp();

    // printf("sum関数をmainから呼び出します\n");
    // int x = sum(0.2);
    // printf("xの値は%dです\n",x);

    // int m = 3;
    // int n = func(m);
    // printf("%d",n);

    int a = calc(2, 3);
    printf("%d",a);
return 0;
}