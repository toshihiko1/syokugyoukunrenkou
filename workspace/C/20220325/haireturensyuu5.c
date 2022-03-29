#include <stdio.h>
int main(void) {
    char str[101];
    int i;
    printf("100文字以内で入力\n");
    scanf("%s",str);
    for(i = 0; str[i] != '\0'; i++) {
            printf("%c\n",str[i]);
        }
    return 0;
}