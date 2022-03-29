#include <stdio.h>
int main(void) {
    char str[101];
    char str2[101];
    int i;
    int hantei = 0;
    printf("100文字以内で入力\n");
    scanf("%s",str);
    printf("100文字以内で入力\n");
    scanf("%s",str2);
    for(i = 0; str[i] || str2[i] != '\0'; i++) {
            if(str[i] != str2[i]) {
                hantei = 1;
            }
        }
        if(hantei == 1){
            printf("等しくない");
        }else{
            printf("等しい");
        }
    return 0;
}