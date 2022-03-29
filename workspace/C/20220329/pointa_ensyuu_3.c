#include <stdio.h>
//1
//プロトタイプ宣言
void erase_tail(char *str,int n);

int main(void) {
  char str[100] = "HELLO";
  int n = 5;

  erase_tail(str,n);

  printf("str = %s", str);

  return 0;
}

void erase_tail(char *str,int n) {
  int i = 0;
  int count = 0;

  while(*str != '\0') {
    str++;
    count++;
  }
    str--;
    count--;

  if(n > count) {
    for(int i = 0; i < count; i++) {
    *str = '\n';
    str--;
    }
  }

  for(int i = 0; i < n; i++) {
    *str = ' ';
    str--;
  }
}
