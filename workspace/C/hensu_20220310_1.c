#include <stdio.h>
int main(void) {
    int total = 20;
    double average = 85.5;
    total = 45;
    printf("%d\n",total);
    printf("%lf\n",average);
    char level = 'A';
    printf("%c\n",level);
    double pi = 3.14159265;
    long a = 5500000000;
    printf("%.8lf\n%ld\n",pi,a);
    
    return 0;
}