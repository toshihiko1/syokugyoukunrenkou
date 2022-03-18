#include <stdio.h>
int main(void) {
//1
// int total = 0;
// int money = 120;
// int day =0;
// while (1) {
//     if(total >= 10000) {
//         break;
//     }else{
//         total += money;
//         day += 1;
//     }
// }
// printf("%d日目で貯金額が%d円になりました\n",day,total);

//2
// int age;
// while(1) {
//     printf("年齢を入力してください\n");
//     scanf("%d", &age);
//     if(age == 0){
//         break;
//     }else if(age < 0 || age >= 100) {
//         printf("エラー\n");
//     }else if(age >= 20){
//         printf("成年\n");
//     }else if(age < 20) {
//         printf("未成年\n");
//     }
// }

//3
// int pay = 0;
// int ave = 0;
// int sum = 0;
// int count = 0;
// while(1){
//     printf("給料を入力してください\n");
//     scanf("%d", &pay);
//     if(pay == 0) {
//         break;
//     }
//     count++;
//     sum += pay;
//     ave = sum / count;
// }
// ave = ave + 0.5;
// printf("給料の合計%d円,給料の平均%d\n", sum,ave);

//4
// int strike = 0;
// int ball = 0;
// int count = 0;
// while(1){
//     printf("ストライクなら１、ボールなら２を入力\n");
//     scanf("%d",&count);
//     if(count == 1){
//         strike++;
//     }else{
//         ball++;
//     }  
//     if(strike == 3 || ball == 4) {
//         break;
//     }
// }
// printf("%dストライク、%dボール\n",strike,ball);

//5
// int strike = 0;
// int ball = 0;
// int count = 0;
// int foul = 0;
// while(1){
//     printf("ストライクなら１、ボールなら２を入力、ファウルなら３を入力\n");
//     scanf("%d",&count);
//     if(count == 1){
//         strike++;
//     }else if(count == 2){
//         ball++;
//     }else if(foul == 2) {
//     }else{
//         foul++;
//         strike++;
//     }
//     if(strike == 3 || ball == 4) {
//         break;
//     }
// }
// printf("%dストライク、%dボール\n",strike,ball);


    return 0;
}