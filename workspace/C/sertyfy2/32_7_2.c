#include <stdio.h>
int main(void) {
int i;
long pay = 100000;
static long weight[] = {20000, 5000, 1000, 500, 100, 50, 10};
int out[] = {0, 0, 0, 0, 0, 0, 0};
int buf[] = {10, 5, 5, 5, 5, 5, 5};

for (i = 0; i < 7; i++)
{
  while (pay / weight[i] > 0 && buf[i] > 0)
  {
    buf[i]--;
    out[i]++;
    pay -= weight[i];
    printf("%ld\n", pay);
    if (pay == 0)
    break;
  }
}
return 0;
}
