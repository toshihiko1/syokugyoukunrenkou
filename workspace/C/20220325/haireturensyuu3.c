#include <stdio.h>
int main(void) {
    char str[100];
    int i;
    printf("100文字以内で入力");
    scanf("%s",str);
    for(i = 0; str[i] != '\0'; i++);
    printf("%sは%d文字です", str, i);
    return 0;
}