#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {

    char str[30] = "abcdefghijk1234lmnop";

    for(int i = 0; str[i] != '\0'; i++) {
        if(isdigit(str[i])==1) {
            str[i] = str[i];
        }else{
            str[i] = toupper(str[i]);
        }
    }

    printf("%s",str);

    return 0;
}
