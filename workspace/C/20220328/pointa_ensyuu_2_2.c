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
// int i2 = 0;
char str2[100];

while (*str != '\0')
{
  str++;
  // printf("%c", *str);
  // str2[100] = *str;
  // *str = str2;
  // i2++;
}

  // str = str - 1;
  for(i = 0; i < 5; i++) {
    str--;
    str2[i] = *str;
    // printf("%c", str2[i]);
    printf("%c", *str);
  }

  for(i = 0; i < 5; i++) {
    *str = str2[i];
    str++;
    printf("%c", str2[i]);
  }
  *str = '\0';
  // printf("%c", *str);

  //  while(*str != *(str - i2)) {
  //  str2[100] = *str;
  //      str--;
  //  }

  //  while(i2) {
  //  *str = str2[i];
  //  str++;
  //  i++;
  //  }

}
