#include <stdio.h>
    void calc(int a, int b) {
        printf("%d\n", b);
        int n = a * b;
        printf("%d\n", n);
        n *=  a;
        printf("%d\n", n);
        n *= a;
    }

    int main(void) {
        int m;
        int x = 5;
        printf("値を入力してください");
        scanf("%d", &m);
        calc(x,m);
        // printf("%d\n", m);
        // n = x * m;
        // printf("%d\n", n);
        // n *=  x;
        // printf("%d\n", n);
        // n *= x;
    return 0;
}