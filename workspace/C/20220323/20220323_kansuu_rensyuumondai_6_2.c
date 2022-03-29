#include <stdio.h>

    //プロトタイプ宣言
    int max3(int x, int y ,int z);
    int min3(int x, int y ,int z);

    int main(void) {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        int max = max3(a,b,c);
        int min = min3(a,b,c);
        printf("1個目の数値\n%d\n2個目の数値\n%d\n3個目の数値\n%d\n",a,b,c);
        printf("最大値は%dです\n最小値は%dです",max ,min);
    return 0;
}

    int max3(int x, int y ,int z) {
        if(x < y){
            x = y;
        }
        if(x < z){
            x = z;
        }
        return x;
    }

    int min3(int x, int y ,int z) {
        if(x > y){
            x = y;
        }
        if(x > z){
            x = z;
        }
        return x;
    }