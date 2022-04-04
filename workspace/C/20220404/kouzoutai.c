#include <stdio.h>
#include <string.h>

  // struct Student { //テンプレート名
  //   int no;
  //   char name[10];
  //   int age;
  // };

  typedef struct  { //typedef
    int no;
    char name[10];
    int age;
  } Student;

    struct Person{
    float height;
    float weight;
    int birthYear;
    int birthMonth;
    int birthDay;
  };

  int main(void) {

    // struct Student std; //テンプレート名：変数名
    // struct Student std1 = {1,"YAMADA",16};
    Student std; //テンプレート名：変数名
    Student std1 = {1,"YAMADA",16};
    printf("%d %s %d\n", std1.no, std1.name, std1.age);

    // struct Student std3;
    // std3.no = 3;
    // strcpy(std3.name,"nagashima");
    // std3.age = 39;
    // printf("%d %s %d\n", std3.no, std3.name, std3.age);

    struct Person prn1 = {170.5,55.5,1980,3,9};
    printf("身長:%.1fcm 体重:%.1fkg 生年月日:%d年%d月%d日\n",
    prn1.height,
    prn1.weight,
    prn1.birthYear,
    prn1.birthMonth,
    prn1.birthDay);

    return 0;
  }
