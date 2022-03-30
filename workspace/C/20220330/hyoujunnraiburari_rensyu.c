#include <stdio.h>
#include <string.h>
int main(void) {

    char a[30] = "";
    char a2[] ="abcde";
    char b[30] = "";
    char b2[] = "vwxyz";

    strcpy(a, a2);
    strcpy(b, b2);
    printf("%s\n%s\n", a, b);

    int result = strcmp(a, b);
    if (result == 0)
    {
        printf("二つの文字列は等しい\n");
    }
    else if (result > 0)
    {
        printf("文字列aはbより大きい\n");
    }
    else
    {
        printf("文字列bはaより大きい\n");
    }

    strcat(a,b);
    printf("a = %s\n", a);

    printf("aの長さ%lu\n", strlen(a));


    return 0;
}
