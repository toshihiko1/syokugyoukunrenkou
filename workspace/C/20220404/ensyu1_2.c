#include <stdio.h>
int main(void) {
  FILE *f;
  char maker[256];
  char outfile[] = "/Users/fujiitoshihiko/Desktop/car.csv";
  f = fopen(outfile, "a");
  if (f == NULL) {
    printf("ファイルのオープンに失敗しました。\n");
    return 9;
  }

  //車のメーカー、車種、排気量を入力し、ファイルに出力。endで終わる。
    while (1) { //無限ループ
      printf("車のメーカーを入力");
      scanf("%s", maker);
      if (maker[0] == 'e' && maker[1] == 'n' && maker[2] == 'd'
      && maker[3] == '\0') { //endと入力されたら抜ける
        break;
      }
      fputs(maker, f);
      fputs(",", f);

      printf("車の車種を入力");
      scanf("%s", maker);
      fputs(maker, f);
      fputs(",", f);

      printf("車の排気量を入力");
      scanf("%s", maker);
      fputs(maker, f);
      fputs(",", f);
    }
  fclose(f);
  return 0;
}
