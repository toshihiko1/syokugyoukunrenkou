#include <stdio.h>

//プロトタイプ宣言
void trimChar(char *str);

int main(void)
{
  char str[] = "CheesC avrwv wr ke";

  trimChar(str);

  printf("str = %s", str);

  return 0;
}

void trimChar(char *str)
{
  char box[100];
  char space = ' ';
  int i = 0;
  int i2 = 0;
  int count = 0;
  // unsigned long strnum = sizeof(*str) / sizeof(*str[0]);
  // printf("%lu", strnum);

  for (i = 0; *(str + i) != '\0'; i++)
  {
    // str++;
    // printf("%c\n",*str);
    if (*(str + i) == space) {
      // str+i;
      // box[i] = *(str+i);
      // str+i;
      // // printf("a");
      // printf("%c",box[i]);
      // count++;
    }else{
      box[i2] = *(str + i);
      printf("%c", box[i2]);
      i2++;
      // str+i;
      // printf("b");

      count++;
    }
  }
  // printf("%d", count);
  // printf("%d", i);
  // str[0] = box[0];
  // printf("%c",str[0]);

  for (int i = 0; i <= count; i++)
  {
    *(str + i) = box[i];
    // printf("%c", str[i]);
  }
  // *str = '\0';
}
