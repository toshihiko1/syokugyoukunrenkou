#include <stdio.h>
int main(void) {

  // FILE *fp;
  // char outfill[] = "/Users/fujiitoshihiko/Desktop/out.txt";
  // fp = fopen(outfill, "a");
  // if(fp == NULL) {
  //   printf("ファイルのオープンに失敗しました。");
  // }

  // fputs("Lifeskill Academy\n2657830", fp);
  // fclose(fp);

  // FILE *fpOut;
  // char outfile[] = "/Users/fujiitoshihiko/Desktop/out.txt";
  // fpOut = fopen(outfile,"w");
  // if (fpOut == NULL) {
  //     printf("ファイルのオープンに失敗しました。");
  // }
  // char name[] = "Lifeskill Academy\n";
  // long telNo = 2657830;
  // fprintf(fpOut, "%s\n%ld", name, telNo);
  // fclose(fpOut);

  //"r"
  // FILE *fpIn;
  // char infile[] = "/Users/fujiitoshihiko/Desktop/in.txt";
  // char wkStr[256];

  // fpIn = fopen(infile, "r");
  // if(fpIn == NULL) {
  //   printf("ファイルのオープンに失敗しました。\n");
  //   return 9;
  // }
  // while (1) {
  //   if(fgets(wkStr, 256, fpIn) == NULL) {
  //     printf("読み込み修了\n");
  //     break;
  //   }else{
  //     printf("%s\n", wkStr);
  //   }
  // }
  // fclose(fpIn);

  //fscanf
  FILE *fpIn;
  char infile[] = "/Users/fujiitoshihiko/Desktop/in.txt";
  float height;
  fpIn = fopen(infile, "r");
  if (fpIn == NULL) {
      printf("ファイルのオープンに失敗しました。\n");
      return 9;
  }
  while(fscanf(fpIn, "%f", &height) != EOF) {
    printf("%f\n", height);
  }
  fclose(fpIn);

    return 0;
  }
