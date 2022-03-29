#include <stdio.h>
int main(void) {
    char str[10];
    int i;
    int hantei = 0;
    printf("9桁以内の数字を入力\n");
    scanf("%s",str);
    for(i = 1; str[i] != '\0'; i++) {
        if(str[0] == '-' || str[0] == '+' || '9' >= str[0] && str[0] >= '0'){
            if(str[i] != '.' && '9' >= str[i] && str[i] >= '0') {
                        hantei = 1;
                }else{
                    hantei = 0;
                    break;
                }
            }else{
                hantei = 0;
                break;
            }    
        }

    if(hantei == 0){
        printf("整数値ではない");
    }else{
        printf("整数");
    }
    return 0;
}