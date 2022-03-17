#include <stdio.h>
int main(void) {
    
// int a = 0;
// for(int i = 0; i < 100; i++) {
//     a += 1;
//     printf("a=%d\n",a);
// }

// int n = 0;
// for(int i = 0;  i < 20; i++) {
//     n += 1;
//     printf("n=%d\n",n);
// }

// for(int i = 0; i < k; i++){
// }

// for(int n = 5; n <= 12; n++) {
//     printf("n=%d\n",n);
// }

// for(int n = 10; n >= 0; n--) {
// }

// int wa = 0;
// for(int i = 1; i <= 100; i++) {
//     wa += i;
// }
// printf("wa=%d\n",wa);

// for(int i = 100; i >= 1; 100 % i) {
//     int amari = i;
//     if(amari != 0) {
//         printf("100は%dで割り切れる\n",i);
//         i = i - 1;
//     }else{
//     }
// }

int i = 100;
int amari;
while(i >= 1) {
    amari = 100 % i;
    if(amari == 0) {
        printf("100は%dで割り切れる\n",i);
    }
    i = i - 1;
}

// int wa = 0;
// int data;
// printf("整数値を入力");
// scanf("%d",&data);
// while( data != 0) {
//     wa = wa + data;
//     printf("%d\n",wa);
//     printf("整数値を入力\n");
//     scanf("%d",&data);
// }



return 0;
}