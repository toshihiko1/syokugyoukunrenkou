#include <stdio.h>
int main(void) {
    char str[10];
    int i;
    int hantei = 0;
    printf("9桁以内の数字を入力\n");
    scanf("%s",str);
    if(str[0] == '-' || str[0] == '+' || str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3' 
        || str[0] == '4' || str[0]=='5' || str[0]=='6' || str[0]=='7' || str[0]=='8' || str[0]=='9') {
    for(i = 0; str[i] != '\0'; i++) {
            if(str[i] == '.') {
                hantei = 1;
            }
    }

            if(hantei == 1){
                printf("整数値ではない");
            }else{
                printf("整数");
        }
    }else{
        printf("整数ではない");
    }
    return 0;
}