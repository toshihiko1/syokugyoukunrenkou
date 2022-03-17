#include <stdio.h>
int main(void) {

//1
// double cm,m,kg,bmi,hyoujun;
// printf("身長(cm)と体重(kg)を順に入力してください。\n");
// scanf("%lf%lf",&cm,&kg);
// m = cm / 100;
// bmi = kg / (m * m);
// hyoujun = 22 * (m * m);
// if(bmi < 18.5) {
//     printf("痩せ気味\n");
// }else if(bmi < 25) {
//     printf("標準\n");
// }else{
//     printf("肥満\n");
// }
// printf("身長%lfセンチ体重%lfキロのあなたのBMIは%.0lfです。\n",cm,kg,bmi);
// printf("あなたの身長の標準体重は%0.1lfキロです。\n",hyoujun);

//2
// char food;
// printf("a-eまでの文字を入力してください");
// food = getchar();
// switch (food){
// case 'a':
//     printf("apple\n");
//     break;
// case 'b':
//     printf("beach\n");
//     break;
// case 'c':
//     printf("cheese\n");
//     break;
// case 'd':
//     printf("desert\n");
//     break;
// case 'e':
//     printf("enjoy\n");
//     break;
// default:
//     printf("other\n");
//     break;
// }

//3
// int seireki;
// printf("西暦を入力してください");
// scanf("%d",&seireki);
// seireki = seireki % 12;
// switch (seireki){
// case 0:
//     printf("さる\n");
//     break;
// case 1:
//     printf("とり\n");
//     break;
// case 2:
//     printf("いぬ\n");
//     break;
// case 3:
//     printf("いのしし\n");
//     break;
// case 4:
//     printf("ねずみ\n");
//     break;
// case 5:
//     printf("うし\n");
//     break;
// case 6:
//     printf("とら\n");
//     break;
// case 7:
//     printf("うさぎ\n");
//     break;
// case 8:
//     printf("たつ\n");
//     break;
// case 9:
//     printf("へび\n");
//     break;
// case 10:
//     printf("うま\n");
//     break;
// case 11:
//     printf("ひつじ\n");
//     break;
// }

//4
// int seireki;
// printf("西暦を入力してください");
// scanf("%d",&seireki);
// if((seireki % 4 == 0 && seireki % 100 != 0) || seireki % 400 == 0 ) {
//     printf("うるう年です\n");
// }else{
//     printf("平年です\n");
// }

//5
// int tyuukan, kimatu, goukei;
// printf("中間試験の点数を入力してください\n");
// scanf("%d",&tyuukan);
// printf("期末試験の点数を入力してください\n");
// scanf("%d",&kimatu);
// goukei = tyuukan + kimatu;
// if(tyuukan >= 60 && kimatu >= 60) {
//     printf("合格\n");
// }else if(goukei >= 100  && (tyuukan >= 90 || kimatu >= 90)) {
//     printf("合格\n");
// }else if(goukei >= 130){
//     printf("合格\n");
// }else{
//     printf("不合格\n");
// }

//6
// int time;
// printf("現在の時刻を0〜23の数字で入力してください\n");
// scanf("%d",&time);
// if(time <= 11) {
//     printf("午前%d時です\n", time);
// }else{
//     time = time - 12;
//     printf("午後%d時です\n", time);
// }

// 7
// int time;
// printf("現在の時刻を0〜23の数字で入力してください\n");
// scanf("%d",&time);
// if(time <= 24 && time >= 0) {
// if(time <= 11) {
//     printf("午前%d時です\n", time);
// }else{
//     time = time - 12;
//     printf("午後%d時です\n", time);
// }
// }else{
//     printf("不正な数です\n");
// }

//8
int orange = 260;
int coffee = 230;
int num, sum1, sum2, price;
printf("飲み物を選んでください\n");
scanf("%d",&num);
if(num == 1 || num  == 2) {
    if(num == 1) {
        printf("オレンジジュースですね。何個入りますか？\n");
        scanf("%d",&sum1);
        price = sum1 * orange;
        printf("%d円です\n", price);
    }else{
        printf("コーヒーですね。何個入りますか？\n");
        scanf("%d",&sum2);
        price = sum2 * coffee;
        printf("%d円です\n", price);
    }
}else{
    printf("番号に誤りがあります\n");
// }

//9
// int gas_price = 141;
// int seikyu;
// double gas, gas_price_sum, wari;
// printf("給油量を入力してください\n");
// scanf("%lf", &gas);
// gas_price_sum = gas * gas_price;
// if(gas > 20) {
//     wari = (gas - 20) * gas_price * 0.1;
// }else{
//     wari = 0;
// }
// seikyu = gas_price_sum - wari;
// printf("ガソリン代：%lf円 割引額：%lf円 請求額：%d円\n", gas_price_sum,wari,seikyu);

//10
// int syaku,sun;
// double cm,a;
// printf("何センチメートル？\n");
// scanf("%lf", &cm);
// a = cm / 3.03;
// syaku = a;
// sun = syaku % 10;
// syaku = a / 10;
// if(syaku < 1 && sun < 1) {
//     printf("%0.1lfセンチメートルは、0寸です\n",cm);    
// }else if(syaku >= 1 && sun < 1){
//     printf("%0.1lfセンチメートルは、%d尺です\n",cm,syaku);
// }else if(syaku < 1 && sun >= 1){
//     printf("%0.1lfセンチメートルは、%d寸です\n",cm,sun);
// }else{
//     printf("%0.1lfセンチメートルは、%d尺%d寸です\n",cm,syaku,sun);
}

return 0;
}