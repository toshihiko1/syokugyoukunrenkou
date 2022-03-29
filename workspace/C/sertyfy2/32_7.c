#include <stdio.h>
#define YEN_COUNT 7
static long weight[] = {10000, 5000, 1000, 500, 100, 50, 10};

int JudgeChange(int in[], int stock[], long price, int out[]) {
  int i;
  long money = 0, pay;
  int buf[YEN_COUNT];

  //入金額を計算する
  for(i = 0; i < YEN_COUNT; i++)
    money += in[i] * weight[i];
  if(money < price)
    return -1;

  for(i = 0; i < YEN_COUNT; i++) {
    buf[i] = stock[i] + in[i];
    out[i] = 0;
  }

  pay = money - price;
  for(i = 0; i < YEN_COUNT; i++) {
    while(pay / weight[i] > 0 && buf[i] > 0) {
      buf[i]--;
      out[i]++;
      pay -= weight[i];
      printf("%ld",pay);
      if(pay == 0)
      break;
    }
  }

  if(pay != 0)
   return -1;
  return 10;
}

int main(void) {
  int in[] = {5,0,0,0,0,0,0};
  int stock[] = {5,5,5,5,5,5,5};
  int out[] = {0,0,0,0,0,0,0};
int a = JudgeChange(in,stock,50000,out);
printf("%d",a);

  return 0;
}
