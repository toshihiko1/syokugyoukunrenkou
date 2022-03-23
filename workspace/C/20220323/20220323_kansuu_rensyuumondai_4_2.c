#include <stdio.h>
    int getMenseki(int x, int y) {
        return  y * x / 2;
    }

    int main(void) {
        int takasa,teihen;
        printf("高さと底辺を入力\n");
        scanf("%d%d", &takasa,&teihen);
        int menseki = getMenseki(takasa,teihen);
        printf("高さ%d,底辺%dの面積は%dです\n",takasa ,teihen, menseki);
    return 0;
}