#include <stdio.h>
//1
//プロトタイプ宣言
void addChar(char *str, char *str2);

int main(void) {
  char str[100] = "HELLO";
  char str2[] = "WORLD";

  addChar(str, str2);

  printf("str = %s", str);

  return 0;
}

void addChar(char *str, char *str2) {

  while(*str != '\0') {
    str++;
  }

  while(*str2 != '\0') {
    *str++ = *str2++;
    //str++;
    //str2++;
  }

  *str = '\0';
}
