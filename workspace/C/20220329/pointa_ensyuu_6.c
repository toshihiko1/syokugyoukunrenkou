#include <stdio.h>

//プロトタイプ宣言
void trimChar(char *str);

int main(void) {
  char str[100] = "CheesC avrwv  wr   ke";

  trimChar(str);

  printf("str = %s", str);

  return 0;
}

void trimChar(char *str) {
  char box[100];
  char space = ' ';
  int i = 0;

  for(int i = 0; i < 22; i++) {
    if(*str == space){
      str++;
      box[i] = *str;
      str++;
    }else{
      box[i] = *str;
      str++;
    }
  }


  for(int i = 0; i < 22; i++){
  *(str+i) = box[i];
  }
}
