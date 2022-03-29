#include <stdio.h>

//プロトタイプ宣言
void reverseChar(char *str);

int main(void) {
  char str[100] = "HELLO";

  reverseChar(str);

  printf("str = %s", str);

  return 0;
}

void reverseChar(char *str) {
int len = 0;
char str2[100];

while (*str != '\0')
{
  str++;
  len++;
}

  for(int i = 0; i < len; i++) {
    str--;
    str2[i] = *str;
  }

  for(int i = 0; i < len; i++) {
    *str = str2[i];
    str++;
  }
  *str = '\0';
}
