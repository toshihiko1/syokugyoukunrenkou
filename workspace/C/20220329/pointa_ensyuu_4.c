#include <stdio.h>

//プロトタイプ宣言
int countChar(char *p);

int main(void) {
  char p[100] = "CheeseCake";

  int count = countChar(p);

  printf("count = %d", count);

  return 0;
}

int countChar(char *p) {
  int c = 0;

  while(*p != '\0') {
    if(*p == 'C'){
      c += 1;
    }
    p++;
  }

  return c;
}
