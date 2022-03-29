#include <stdio.h>
    //プロトタイプ宣言
    int getSalePrice(int x);

    int main(void) {
        int price = 0;
        scanf("%d", &price);
        int salePrice = getSalePrice(price);
        printf("%d円を二割引きした販売価格は%d円です\n",price ,salePrice);
    return 0;
    }

    int getSalePrice(int x) {
        return  (x * 0.8) + 0.5;
    }