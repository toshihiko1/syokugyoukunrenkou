#include <stdio.h>

//プロトタイプ宣言
int countChar2(char *p, char c);

int main(void) {
  char p[100] = "CheeseCake";
  char c = 'e';

  int count = countChar2(p,c);

  printf("count = %d", count);

  return 0;
}

int countChar2(char *p,char c) {
  int same = 0;

  for(int i = 0; *(p + i) != '\0'; i++) {
    if(*p + i == c){
      same += 1;
    }
  }
  // while(*p != '\0') {
  //   if(*p == c){
  //     same += 1;
  //   }
  //   p++;
  // }

  return same;
}
