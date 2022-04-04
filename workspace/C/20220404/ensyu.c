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
  // while (fscanf(f, "%f", &height) != EOF)
  // {
  //   printf("%f\n", height);
  // }
  // fclose(fpIn);
  // while (fprintf(f, "%s", maker) != "end") {
    while(1) {
    int i = 0;
    scanf("%s", maker);
    fprintf(f, "%s", maker);
    if (maker[0] == 'e' && maker[1] == 'n' && maker[2] == 'd' ) {
      break;
    }
    printf("%s\n",maker);
    i++;
  }
  return 0;
}
