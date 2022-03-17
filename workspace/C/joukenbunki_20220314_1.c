#include <stdio.h> 
int main(void) {

//     printf("2>=3の論理式の評価は%dです\n",2>=3);
//     printf("1<5の論理式の評価は%dです\n",1<5);
//     printf("3==3の論理式の評価は%dです\n",3==3);
//     printf("2!=4の論理式の評価は%dです\n",2!=4);

//     printf("2>1 && 1<3 は%dです\n",2>1 &&1<3);
//     printf("2<1 && 1<3 は%dです\n",2<1 &&1<3);
//     printf("2>1 && 1>3 は%dです\n",2<1 &&1>3);
//     printf("2>1 || 1<3 は%dです\n",2>1 ||1<3);
//     printf("2<1 || 1<3 は%dです\n",2<1 ||1<3);
//     printf("2>1 || 1>3 は%dです\n",2<1 ||1>3);
//     printf("2>1 の論理否定は%dです\n",!(2>1));
//     printf("2<1 の論理否定は%dです\n", !(2<1));

//    int a = -1;
//    if (a > 0) {
//        printf("条件を満たしました\n");
//    }else{
//        printf("条件を満たしませんでした\n");
//    }

//    int b = 5;
//    if (b % 2 == 0) {
//        printf("条件を満たしました\n");
//    }else{
//        printf("条件を満たしませんでした\n");
//    }

//    int ipNum;
//    printf("キーボードから数値を入力してください\n");
//    scanf("%d",&ipNum);
//    if(ipNum >= 100) {
//        printf("入力値%dは100以上でした\n",ipNum);
//    }
//    if(ipNum % 2 == 0 && ipNum % 3 == 0) {
//        printf("入力値%dは2と3の公倍数でした\n",ipNum);
//    }

    // int num = 70;
    // if(num == 100) {
    //     printf("100点でした\n");
    // }else if (num >= 80) {
    //     printf("100点未満80点以上でした\n");
    // }else if (num >= 50) {
    //     printf("80点未満50点以上でした\n");
    // }else if (num >= 0) {
    //     printf("50点未満0点以上でした\n");
    // }else{
    //     printf("点数が負の値です\n");
    // }

    // int kion;
    // printf("キーボードから気温を整数値で入力してください\n");
    // scanf("%d", &kion);
    // if(kion >= 25) {
    //     printf("夏\n");
    // }else if(kion < 10) {
    //     printf("冬\n");
    // }else{
    //     printf("春か秋\n");
    // }

    // int price = 1000;
    // if(price > 500) {
    //     printf("500円より高い\n");
    //     if (price > 800) {
    //         printf("800円より高い\n");
    //     }else{
    //         printf("500円より高いけど800円以下です\n");
    //     }
    // }else if (price >= 100) {
    //     printf("500円以下ですが100円以上です\n");
    // }else{
    //     printf("100円未満です\n");
    // }

    // int age;
    // printf("年齢を入力してください。\n");
    // scanf("%d", &age);
    // if(age >= 18){
    //     printf("運転免許取れますね。\n");
    //     if(age == 20){
    //         printf("成人式ですね。\n");
    //     }
    //     if(age >= 20){
    //             printf("飲酒できますね。\n");
    //     }
    // }else{ 
    //     printf("免許取れないし、飲酒もできませんね。\n");
    // }
   
    // int a = 3;
    // switch (a % 3){
    // case 0:
    //     printf("変数aは3で割り切れます\n");
    //     // break;
    // case 1:
    //     printf("変数aは3で割ると1余ります\n");
    //     break;
    // default:
    //     printf("それ以外の場合でした\n");
    //     break;
    // }

    // int age;
    // printf("年齢を入力してください。\n");
    // scanf("%d", &age);
    // switch (age){
    // case 10:
    //     printf("二分の一成人式ですね\n");
    //     break;
    // case 20:
    //     printf("成人式ですね\n");
    //     break;
    // case 19:
    //     printf("来年、成人式ですね\n");
    //     break;
    // case 40:
    //     printf("ダブル成人式ですね\n");
    //     break;
    // }


    int kisetu;
    printf("何月かを入力してください。\n");
    scanf("%d", &kisetu);
    switch (kisetu){
    case 3:
    case 4:
    case 5:
        printf("春です\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("夏です\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("秋です\n");
        break;
    case 12:
    case 1: 
    case 2:
        printf("冬です\n");
        break;
    default:
        printf("エラー\n");
        break;
    }

    return 0;
   
}
