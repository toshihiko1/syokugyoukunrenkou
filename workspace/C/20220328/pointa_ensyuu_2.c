#include <stdio.h>
//1
//プロトタイプ宣言
void reverseChar(char *str);

int main(void) {
  char str[100] = "HELLO";

  reverseChar(str);

  printf("str = %s", str);

  return 0;
}

void reverseChar(char *str) {
  int i = 0;
  int i2 = 0;
  int i3 = 0;
  while(*str != '\0') {
    str++;
    i2++;
  }

  str = str - i2;
  i2 = i2 - 1;

  while(3) {
    *str = *(str + i2 - i);
    str++;
    i--;
  }

}
