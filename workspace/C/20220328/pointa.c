#include <stdio.h>
// void makeValueHalf(double x) {
//     x /= 2;
// }

void makeValueHalf(double *x) {
    *x /= 2;
}


int main(void) {

    // int a = 3;
    // printf("%d\n",a);
    // printf("%p\n",&a);

    // char b[4] = "LSS";
    // printf("%s\n", b);
    // printf("%p\n", &b[0]);
    // printf("%p\n", &b[1]);
    // printf("%p\n", &b[2]);
    // printf("%p\n", &b[3]);

    // int a = 123;                //int型変数aを123で初期化
    // int *p = &a;                //ポインタ変数pにaのアドレスを代入
    // printf("a = %d\n", a);      //変数aの中身を表示

    //ポインタ変数pに*をつけるとポインタがさすアドレスの中身を示す
    // printf("*p = %d\n", *p);
    // *p = 456;

    // printf("a = %d\n", a);
    // printf("*p = %d\n", *p);

    // char s[] = "Lifeskill Academy";
    // char *p = s;
    // for(int i = 0; *(p + i) != '\0'; i++){
    //     printf("%c", *(p + i));
    // }

    // int num[] = {1,2,3,4,5};
    // int *p1 = num;
    // unsigned long idNum = sizeof(num) / sizeof(num[0]);
    // for(int i = 0; i < idNum; i++){
    //     printf("%d", *p1++);
    // }

    // double num;
    // printf("値を入力->");
    // scanf("%lf",&num);
    // printf("入力値=%lf\n",num);
    // makeValueHalf(num);
    // printf("関数実行後=%lf\n",num);

    // double num;
    // printf("値を入力->");
    // scanf("%lf",&num);
    // printf("入力値=%lf\n",num);
    // makeValueHalf(&num);
    // printf("関数実行後=%lf\n",num);



    return 0;
}
