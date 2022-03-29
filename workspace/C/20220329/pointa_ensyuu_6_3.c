#include <stdio.h>

//プロトタイプ宣言
void trimChar(char *str);

int main(void)
{
  char str[] = "CheesC avr    wv wr ke";

  trimChar(str);

  printf("str = %s", str);

  return 0;
}

void trimChar(char *str)
{
  char box[100];
  char space = ' ';
  int i = 0;
  int count = 0;

  for (i = 0; *(str + i) != '\0'; i++)
  {
    if (*(str + i) == space) {

    }else{
      box[count] = *(str + i);
      count++;
    }
  }

  for (int i = 0; i <= count; i++)
  {
    *(str + i) = box[i];
  }
}
