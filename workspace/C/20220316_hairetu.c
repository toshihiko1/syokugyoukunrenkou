#include <stdio.h>
int main(void) {

// int num[4];
// num[0] = 1;
// num[1] = 2;
// num[2] = 3;
// num[3] = 4;
// printf("配列の0番目の中身は%dです\n",num[0]);
// printf("配列の1番目の中身は%dです\n",num[1]);
// printf("配列の2番目の中身は%dです\n",num[2]);
// printf("配列の3番目の中身は%dです\n",num[3]);

// int num2[] = {5,6,7,8};
// printf("配列の0番目の中身は%dです\n",num2[0]);
// printf("配列の1番目の中身は%dです\n",num2[1]);
// printf("配列の2番目の中身は%dです\n",num2[2]);
// printf("配列の3番目の中身は%dです\n",num2[3]);

// int num3[3][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24}};
// printf("配列の0番目の中身は%dです\n",num3[0][0]);
// printf("配列の1番目の中身は%dです\n",num3[1][2]);
// printf("配列の2番目の中身は%dです\n",num3[2][1]);

//1
// char m[3];
// printf("3個の文字を入力してください\n");
// scanf("%c%c%c",&m[0],&m[1],&m[2]);
// printf("最初%c\n最後%c\n",m[0],m[2]);

//2
// int m[3];
// printf("3つの数字を入力してください\n");
// scanf("%d%d%d",&m[0],&m[1],&m[2]);
// if(m[0] > m[1]) {
//     if(m[0] > m[2]) {
//         printf("最大値%d\n",m[0]);
//     }else{
//         printf("最大値%d\n",m[2]);
//     }
// }else if(m[1] > m[2]){
//     printf("最大値%d\n",m[1]);
// }else{
//     printf("最大値%d\n",m[2]);
// }

// int m[3];
// int max = 0;
// printf("3つの数字を入力してください\n");
// scanf("%d%d%d",&m[0],&m[1],&m[2]);
// if(max <= m[0]) {
//     max = m[0];
// }
// if(max <= m[1]) {
//     max = m[1];
// }
// if(max <= m[2]) {
//     max = m[2];
// }
// printf("最大値%d\n",max);

// int m[3];
// int max = 0;
// printf("3つの数字を入力してください\n");
// scanf("%d%d%d",&m[0],&m[1],&m[2]);
// if(score[1] <= 85) {
//     score = A;
// }
// if(max <= m[1]) {
//     max = m[1];
// }
// if(max <= m[2]) {
//     max = m[2];
// }
// printf("最大値%d\n",max);

// int m[3];
// int kamokunum;
// int max = 0;
// printf("3つの数字を入力してください\n");
// scanf("%d%d%d",&m[0],&m[1],&m[2]);
// if(score[1] <= 85) {
//     max = m[0];
//     kamokunum = 1;

// }
// if(max <= m[1]) {
//     max = m[1];
// }
// if(max <= m[2]) {
//     max = m[2];
// }
// printf("最大値%d\n",max);

// int m[3];
// printf("3つの数字を入力してください\n");
// scanf("%d%d%d",&m[0],&m[1],&m[2]);
// if(m[1] < m[0] >m[2]) {
//     printf("最大値%d\n",m[0]);
// }else if(m[0] < m[1] >m[2]) {
//     printf("最大値%d\n",m[1]);
// }else {
//     printf("最大値%d\n",m[2]);
// }


//3
// double cm[4],sum,ave,heihou;
// printf("身長4人分入力してください\n");
// scanf("%lf%lf%lf%lf",&cm[0],&cm[1],&cm[2],&cm[3]);
// sum = cm[0] + cm[1] + cm[2] + cm[3];
// ave = sum / 4;
// printf("平均身長:%0.1lf\n",ave);

//4
// double data[5] = {8.5,10.0,12.3,5.0,4.2},sum,ave,heihou;
// sum = data[0] + data[1] + data[2] + data[3] + data[4];
// ave = sum / 5;
// heihou = data[0] * data[0] + data[1] * data[1] + data[2] * data[2] + data[3] 
//* data[3] + data[4] * data[4];
// printf("配列のすべての要素の合計:%0.1lf\nすべての要素の平均:%0.1lf\nすべての要素の平方和:
//%0.2lf\n",sum,ave,heihou);

//5
// int point[5],ave;
// printf("国語、数学、英語、理科、社会の順に点数を入力してください\n");
// scanf("%d%d%d%d%d",&point[0],&point[1],&point[2],&point[3],&point[4]);
// ave = point[0] + point[1] + point[2] + point[3] + point[4] / 5 ;
// printf("5教科の平均点は%d\n",ave);
// if(point[0] >= 80) {         //変数でrank1を作った方がいい

//     printf("国語の評価はA\n",point[0]);
// }else if (point[0] >= 60) {
//     printf("国語の評価はB\n",point[0]);
// }else if (point[0] >= 40) {
//     printf("国語の評価はC\n",point[0]);
// }else{
//     printf("国語の評価はD\n",point[0]);
// }

// if(point[0] >= 80) {
//     printf("数学の評価はA\n",point[1]);
// }else if (point[0] >= 60) {
//     printf("数学の評価はB\n",point[1]);
// }else if (point[0] >= 40) {
//     printf("数学の評価はC\n",point[1]);
// }else{
//     printf("数学の評価はD\n",point[1]);
// }

// if(point[0] >= 80) {
//     printf("英語の評価はA\n",point[2]);
// }else if (point[0] >= 60) {
//     printf("英語の評価はB\n",point[2]);
// }else if (point[0] >= 40) {
//     printf("英語の評価はC\n",point[2]);
// }else{
//     printf("英語の評価はD\n",point[2]);
// }

// if(point[0] >= 80) {
//     printf("理科の評価はA\n",point[3]);
// }else if (point[0] >= 60) {
//     printf("理科の評価はB\n",point[3]);
// }else if (point[0] >= 40) {
//     printf("理科の評価はC\n",point[3]);
// }else{
//     printf("理科の評価はD\n",point[3]);
// }

// if(point[0] >= 80) {
//     printf("社会の評価はA\n",point[4]);
// }else if (point[0] >= 60) {
//     printf("社会の評価はB\n",point[4]);
// }else if (point[0] >= 40) {
//     printf("社会の評価はC\n",point[4]);
// }else{
//     printf("社会の評価はD\n",point[4]);
// }

//maxでやる場合は代入した後に、科目ナンバー変数を作って
//数字を代入、その後にswitchで国語などを設定して表示する

// if(point[0] > point[1]) {
//     if(point[0] > point[2]) {
//         if(point[0] > point[3]) {
//             if(point[0] > point[4]) {
//         printf("最高得点国語%d\n",point[0]);
//     }else{
//         printf("最高得点社会%d\n",point[4]);
//     }
// }}}else if(point[1] > point[2]) {
//         if(point[1] > point[3]) {
//             if(point[1] > point[4]) {
//         printf("最高得点数学%d\n",point[1]);
//     }else{
//         printf("最高得点社会%d\n",point[4]);
//     }
// }}else if(point[2] > point[3]) {
//         if(point[2] > point[4]) {
//         printf("最高得点英語%d\n",point[2]);
//     }else{
//         printf("最高得点社会%d\n",point[4]);
//     }
// }else if(point[3] > point[4]) {
//         printf("最高得点理科%d\n",point[3]);
//     }else{
//         printf("最高得点社会%d\n",point[4]);
// }

// if(point[0] < point[1]) {
//     if(point[0] < point[2]) {
//         if(point[0] < point[3]) {
//             if(point[0] < point[4]) {
//         printf("最低得点国語%d\n",point[0]);
//     }else{
//         printf("最低得点社会%d\n",point[4]);
//     }
// }}}else if(point[1] < point[2]) {
//         if(point[1] < point[3]) {
//             if(point[1] < point[4]) {
//         printf("最低得点数学%d\n",point[1]);
//     }else{
//         printf("最低得点社会%d\n",point[4]);
//     }
// }}else if(point[2] < point[3]) {
//         if(point[2] < point[4]) {
//         printf("最低得点英語%d\n",point[2]);
//     }else{
//         printf("最低得点社会%d\n",point[4]);
//     }
// }else if(point[3] < point[4]) {
//         printf("最低得点理科%d\n",point[3]);
//     }else{
//         printf("最低得点社会%d\n",point[4]);
// }

//6

// char hyou [8];
// char hyou [0] = "曜日,日曜,月曜,火曜,水曜,木曜,金曜,土曜";
// printf("%c",hyou[1]);

// char hyou[4][8];
// char hyou[0] = {{'曜日','日曜','月曜','火曜','水曜','木曜','金曜','土曜'},{午前,休診,○,休診,○,○,休診,○},{午後,休診,○,○,○,○,○,休診},{休診,○,○,休診,○,○,休診}};
// printf("次のガイドに従って曜日と時間帯を数字で入力してください%c\n",hyou[1][1]);
// scanf("")
// printf("0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜\n");
// printf("0=午前、1=午後、2=夜間\n");

// int a = 1;
// for(int i = 0 ; i < 5; i++) {
//     a += 2;
//     printf("a = %d\n", a);
// }



// int a = 1;
// while (a < 10) {
//     a += 2;
//     printf("a=%d\n",a);
// }

// int a = 11;
// do {
//     a += 2;
//     printf("a=%d\n", a);
// }while(a < 10);


// int yotei[3][7] = {{0,1,0,1,1,0,1},
// {0,1,1,1,1,1,0},{0,1,1,0,1,1,0}};
// int youbi,jikantai,handan,yoteiwosagasu;
// int number[21] = {0,1,2,3,4,5,6,7,8,9,10,
// 11,12,13,114,15,16,17,18,19,20};

// printf("次のガイドに従い入力してください\n");
// printf("0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜\n");
// scanf("%d",&youbi);
// printf("0=午前、1=午後、2=夜間\n");
// scanf("%d",&jikantai);

// if(youbi == 0) {
//     handan = youbi + jikantai;
// }else if(youbi == 1) {
//     handan = youbi + jikantai + 6;
// }else{
//     handan = youbi + jikantai + 12;
// }

// if(handan == number[0]) {
//     yoteiwosagasu = yotei[0][0];
// }
// if(handan == number[1]) {
//     yoteiwosagasu = yotei[0][1];
// }
// if(handan == number[2]) {
//     yoteiwosagasu = yotei[0][2];
// }
// if(handan == number[3]) {
//     yoteiwosagasu = yotei[0][3];
// }
// if(handan == number[4]) {
//     yoteiwosagasu = yotei[0][4];
// }
// if(handan == number[5]) {
//     yoteiwosagasu = yotei[0][5];
// }
// if(handan == number[6]) {
//     yoteiwosagasu = yotei[0][6];
// }
// if(handan == number[7]) {
//     yoteiwosagasu = yotei[1][0];
// }
// if(handan == number[8]) {
//     yoteiwosagasu = yotei[1][1];
// }
// if(handan == number[9]) {
//     yoteiwosagasu = yotei[1][2];
// }
// if(handan == number[10]) {
//     yoteiwosagasu = yotei[1][3];
// }
// if(handan == number[11]) {
//     yoteiwosagasu = yotei[1][4];
// }
// if(handan == number[12]) {
//     yoteiwosagasu = yotei[1][5];
// }
// if(handan == number[13]) {
//     yoteiwosagasu = yotei[1][6];
// }
// if(handan == number[14]) {
//     yoteiwosagasu = yotei[2][0];
// }
// if(handan == number[15]) {
//     yoteiwosagasu = yotei[2][1];
// }
// if(handan == number[16]) {
//     yoteiwosagasu = yotei[2][2];
// }
// if(handan == number[17]) {
//     yoteiwosagasu = yotei[2][3];
// }
// if(handan == number[18]) {
//     yoteiwosagasu = yotei[2][4];
// }
// if(handan == number[19]) {
//     yoteiwosagasu = yotei[2][5];
// }
// if(handan == number[20]) {
//     yoteiwosagasu = yotei[2][6];
// }

 
    
// switch (youbi){
// case 0:
//     printf("日曜\n");
//     break;
// case 1:
//     printf("月曜\n");
//     break;
// case 2:
//     printf("火曜\n");
//     break;
// case 3:
//     printf("水曜\n");
//     break;
// case 4:
//     printf("木曜\n");
//     break;
// case 5:
//     printf("金曜\n");
//     break;
// case 6:
//     printf("土曜\n");
//     break;
// }    

// switch (jikantai){
// case 0:
//     printf("午前\n");
//     break;
// case 1:
//     printf("午後\n");
//     break;
// case 2:
//     printf("夜間\n");
//     break;
// }    

// if(yoteiwosagasu == 1) {
//     printf("営業");
// }else{
//     printf("休診");
// }

//if(配列[変数][変数] ＝＝　０ ) {
//     これでもいい
// }




return 0;


}