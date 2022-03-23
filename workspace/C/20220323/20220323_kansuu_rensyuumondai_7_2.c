#include <stdio.h>
    double seihoukei(double x) {
        return x * x;
    }

    double tyouhoukei(double x,double y) {
        return x * y;
    }

    double en(double x) {
        return x * x * 3.14;
    }

    int main(void) {
        int num;
        double menseki;
        printf("図形の種類(正方形=1,長方形=2,円=3)\n");
        scanf("%d", &num);
        if(num == 1){
            double hen;
            printf("一辺の長さ\n");
            scanf("%lf", &hen);
            menseki = seihoukei(hen);
            printf("面積は%.2lfです\n",menseki);
        }
        if(num == 2){
            double tate,yoko;
            printf("縦と横の長さ\n");
            scanf("%lf%lf", &tate,&yoko);
            menseki = tyouhoukei(tate,yoko);
            printf("面積は%.2lfです\n",menseki);
        }
        if(num == 3){
            double hankei;
            printf("半径長さ\n");
            scanf("%lf", &hankei);
            menseki = en(hankei);
            printf("面積は%.2lfです\n",menseki);
        }
        
    return 0;
}