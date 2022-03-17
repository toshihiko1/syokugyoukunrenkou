#include <stdio.h>
int main(void) {
    // 前置と後置
    // int a1, a2;
    // int b1 = 1;
    // int b2 = 1;
    // a1 = ++b1;
    // a2 = b2++;
    // printf("変数b1を前置インクリメントした値は%dです\n", a1);
    // printf("変数b2を後置インクリメントすると%dです\n", a2);
    // printf("変数b1は%dです\n", b1);
    // printf("変数b2は%dです\n", b2);

    // 複合代入演算子
    // int num1 = 10;
    // int num2 = 10;
    // int num3 = 10;
    // int num4 = 10;
    // int num5 = 10;
    // num1 += 2;
    // num2 -= 2;
    // num3 *= 2;
    // num4 /= 2;
    // num5 %= 2;
    // printf("num1=%d,num2=%d,num3=%d,num4=%d,num5=%d\n",num1,num2,num3,num4,num5);

    // int a = 3.6;
    // float f = 3 / 2;
    // printf("a = %d\n",a);
    // printf("f = %f\n",f);
    
    // int a = 3;
    // int b = 2;
    // float c = (float)a / (float)b;
    // printf("変数c = %.1f \n",c);

    // int num;
    // printf("整数値を入力してください\n");
    // scanf("%d",&num);
    // printf("入力された値は%dでした\n",num);

    // float num2;
    // printf("小数点を入力してください\n");
    // scanf("%f",&num2);
    // printf("入力された値は%fでした\n",num2);

    // char moji;
    // printf("文字を入力してください\n");
    // moji = getchar();
    // printf("入力された値は%cでした\n",moji);

    // int ip1,ip2,ip3;
    // printf("整数値を3つ入力してください\n");
    // scanf("%d%d%d",&ip1,&ip2,&ip3);
    // printf("ip1=%d,ip2=%d,ip3=%d\n",ip1,ip2,ip3);
    // return 0;

    // 練習問題①
    // char name;
    // int month,day;
    // double foot;
    // printf("あなたの名前のイニシャルを入力してください。\n");
    // name = getchar();
    // printf("こんにちは、%cさん!\nあなたの誕生日はいつですか？\n",name);
    // scanf("%d%d",&month,&day);
    // printf("%d月%d日なんですね。\n",month,day);
    // printf("足のサイズを聞いてもいいですか？\n");
    // scanf("%lf", &foot);
    // printf("%.1lfcmなんですね。\n",foot);

    ②
    // int i,j,z1,z2,z3,z4;
    // printf("キーボードから二つの整数値を入力してください\n");
    // scanf("%d%d",&i,&j);
    // z1 = i + j;
    // z2 = i - j;
    // z3 = i * j;
    // z4 = i % j;
    // printf("i+j=%d,i-j=%d,i*j=%d,i%%j=%dです\n",z1,z2,z3,z4);

    //③
    // int ja,aris,en,sum;
    // double ave;
    // printf("国語、算数、英語の点数を順に入力してください\n");
    // scanf("%d%d%d",&ja,&aris,&en);
    // sum = ja + aris + en;
    // ave = sum / 3;
    // printf("合計点%d点で、平均点は%.1lf点です。\n",sum,ave);

    //④
    // int ver,hori,sq,cirver;
    // double cir;
    // printf("四角形の縦と横の長さを入力してください\n");
    // scanf("%d%d",&ver,&hori);
    // sq = ver * hori;
    // printf("たて%d、よこが%dの四角形の面積%dです\n",ver,hori,sq);
    // printf("円の直径を入力してください\n");
    // scanf("%d",&cirver);
    // cir = ((cirver / 2) * (cirver / 2)) * 3.14;
    // printf("直径が%dの円の面積は%lfです\n",cirver,cir);
    
    //⑤
    // int price;
    // double shohi;
    // printf("商品の価格を入力してください。\n");
    // scanf("%d",&price);
    // shohi = price * 1.08;
    // printf("商品の税抜き価格%d円、消費税込み%.0lf円です\n",price,shohi);

    //⑥
    // double giga,kilo;
    // printf("データ量をギガバイトで入力してください\n");
    // scanf("%lf",&giga);
    // kilo = giga * 1024 * 1024;
    // printf("%lfは、%.0lfキロバイトです\n",giga,kilo);

    //⑦
    double cm,m,kg,bmi,hyoujun;
    printf("身長(cm)と体重(kg)を順に入力してください。\n");
    scanf("%lf%lf",&cm,&kg);
    m = cm / 100;
    bmi = kg / (m * m);
    hyoujun = 22 * (m * m);
    printf("身長%lfセンチ体重%lfキロのあなたのBMIは%.0lfです。\n",cm,kg,bmi);
    printf("あなたの身長の標準体重は%0.1lfキロです。\n",hyoujun);


    return 0;
}