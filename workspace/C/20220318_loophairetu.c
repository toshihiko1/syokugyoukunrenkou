#include <stdio.h>
int main(void) {
    // float height[] = {175.5, 155.5, 143.4};
    // for(int i = 0; i < 3; i++) {
    //     printf("%d番目の人の身長は%fcmです\n",i+1,height[i]);
    // }

    
    int number[10];
    int count1 = 0;
    int count2 = 0;
    int guusuu[count1];
    int kisuu[count2];
    int index = 0;
    for(int i = 0; i < 10; i++) {
        printf("整数を入力してください\n");
        scanf("%d",&number[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if(number[i] % 2 == 0) {
            guusuu[count1] = number[i];
            count1++;
        }else{
            kisuu[count2] = number[i];
            count2++;
        }
    }
    

    index = count1;
    count1 = 0;
    printf("偶数:");
    for(int i = 0; i < index; i++) {
            printf("%d",guusuu[i]);
    }
    

    // printf("\n奇数:");
    // for(int i = 0; i < 5; i++) {
    //     printf("%d,",kisuu[i]);
    // }
    
    // int point[5];
    // int sum = 0;
    // int ave = 0; 
    // int rank1 = 0;
    // char rankA = 'A';
    // char rankB = 'B';
    // char rankC = 'C';
    // char rankD = 'D';
    // int max = 0;
    // int min = 100;
    // int maxrank = 0;
    // int minrank = 0;

    // for(int i = 0; i < 5; i++) {
    // printf("国語、数学、英語、理科、社会の順に点数を入力してください\n");
    // scanf("%d",&point[i]);
    // sum += point[i];
    // }

    // ave = sum / 5;
    // printf("平均点は%dです\n",ave);

    // for(int i = 0; i < 5; i++) {
    //     if(point[i] >= 80) {
    //         rank1 = 0;
    //     }else if(point[i] >= 60){
    //         rank1 = 1;
    //     }else if(point[i] >= 40){
    //         rank1 = 2;
    //     }else{
    //         rank1 = 3;  //koreno

    //     }

    //     if(i == 0){
    //     switch(rank1) {
    //     case 0:
    //         printf("国語の評価は%cです\n",rankA);
    //         break;
    //     case 1:
    //         printf("国語の評価は%cです\n",rankB);
    //         break;
    //     case 2:
    //         printf("国語の評価は%cです\n",rankC);
    //         break;
    //     case 3:
    //         printf("国語の評価は%cです\n",rankD);
    //         break;
    //     }
    //     }
    //     if(i == 1){
    //     switch(rank1) {
    //     case 0:
    //         printf("数学の評価は%cです\n",rankA);
    //         break;
    //     case 1:
    //         printf("数学の評価は%cです\n",rankB);
    //         break;
    //     case 2:
    //         printf("数学の評価は%cです\n",rankC);
    //         break;
    //     case 3:
    //         printf("数学の評価は%cです\n",rankD);
    //         break;
    //     }
    //     }
    //     if(i == 2){
    //     switch(rank1) {
    //     case 0:
    //         printf("英語の評価は%cです\n",rankA);
    //         break;
    //     case 1:
    //         printf("英語の評価は%cです\n",rankB);
    //         break;
    //     case 2:
    //         printf("英語の評価は%cです\n",rankC);
    //         break;
    //     case 3:
    //         printf("英語の評価は%cです\n",rankD);
    //         break;
    //     }
    //     }
    //     if(i == 3){
    //     switch(rank1) {
    //     case 0:
    //         printf("理科の評価は%cです\n",rankA);
    //         break;
    //     case 1:
    //         printf("理科の評価は%cです\n",rankB);
    //         break;
    //     case 2:
    //         printf("理科の評価は%cです\n",rankC);
    //         break;
    //     case 3:
    //         printf("理科の評価は%cです\n",rankD);
    //         break;
    //     }
    //     }
    //     if(i == 4){
    //     switch(rank1) {
    //     case 0:
    //         printf("社会の評価は%cです\n",rankA);
    //         break;
    //     case 1:
    //         printf("社会の評価は%cです\n",rankB);
    //         break;
    //     case 2:
    //         printf("社会の評価は%cです\n",rankC);
    //         break;
    //     case 3:
    //         printf("社会の評価は%cです\n",rankD);
    //         break;
    //     }
    //     }
        
    // }

    // for(int i = 0; i < 5; i++) {
    //     if(point[i] >= max) {
    //     max = point[i];
    //     maxrank = maxrank + 1; //iを入れれば良い
    //     }
    // }

    // //最高得点は％dと書いて最後にスウィッチを出力
    // switch(maxrank) {
    //     case 1:
    //         printf("最高点は国語の%dです",max);//国語だけにする
    //         break;
    //     case 2:
    //         printf("最高点は数学の%dです",max);
    //         break;
    //     case 3:
    //         printf("最高点は英語の%dです",max);
    //         break;
    //     case 4:
    //         printf("最高点は理科の%dです",max);
    //         break;
    //     case 5:
    //         printf("最高点は社会の%dです",max);
    //         break;
    //     }

    // min = point[0];
    // for(int i = 0; i < 5; i++) {
    //     if(point[i] <= min) {
    //     min = point[i];
    //     minrank = minrank + 1;
    //     }
    // }

    // switch(maxrank) {
    //     case 1:
    //         printf("最低点は国語の%dです",min);
    //         break;
    //     case 2:
    //         printf("最低点は数学の%dです",min);
    //         break;
    //     case 3:
    //         printf("最低点は英語の%dです",min);
    //         break;
    //     case 4:
    //         printf("最低点は理科の%dです",min);
    //         break;
    //     case 5:
    //         printf("最低点は社会の%dです",min);
    //         break;
    //     }


//     int point[5];
//     int sum = 0;
//     int ave = 0; 
//     char rank1 = 0;
//     int max = 0;
//     int min = 100;
//     int maxrank = 0;
//     int minrank = 0;

//     for(int i = 0; i < 5; i++) {
//     printf("国語、数学、英語、理科、社会の順に点数を入力してください\n");
//     scanf("%d",&point[i]);
//     sum += point[i];
//     }

//     ave = sum / 5;
//     printf("平均点は%dです\n",ave);

//     for(int i = 0; i < 5; i++) {
//         if(point[i] >= 80) {
//             rank1 = 'A';
//         }else if(point[i] >= 60){
//             rank1 = 'B';
//         }else if(point[i] >= 40){
//             rank1 = 'C';
//         }else{
//             rank1 = 'D';  //koreno

//         }

//         switch(i) {
//         case 0:
//             printf("国語");
//             break;
//         case 1:
//             printf("数学");
//             break;
//         case 2:
//             printf("英語");
//             break;
//         case 3:
//             printf("理科");
//             break;
//         case 4:
//             printf("社会");
//             break;
//         }
//         printf("の評価は%c\n",rank1);     
//     }

//     for(int i = 0; i < 5; i++) {
//         if(point[i] >= max) {
//         max = point[i];
//         maxrank = i; //iを入れれば良い
//         }
//     }

//     //最高得点は％dと書いて最後にスウィッチを出力
//     printf("最高点は");
//     switch(maxrank) {
//         case 1:
//             printf("国語の");//国語だけにする
//             break;
//         case 2:
//             printf("数学の");
//             break;
//         case 3:
//             printf("英語の");
//             break;
//         case 4:
//             printf("理科の");
//             break;
//         case 5:
//             printf("社会の");
//             break;
//         }
//     printf("%dです\n",max);
        

//     min = point[0];
//     for(int i = 0; i < 5; i++) {
//         if(point[i] <= min) {
//         min = point[i];
//         minrank = i;
//         }
//     }

//     printf("最低点は");
//     switch(minrank) {
//         case 1:
//             printf("国語の");
//             break;
//         case 2:
//             printf("数学の");
//             break;
//         case 3:
//             printf("英語の");
//             break;
//         case 4:
//             printf("理科の");
//             break;
//         case 5:
//             printf("社会の");
//             break;
//         }
//     printf("%dです\n",min);
    
return 0;

}

// swicth(rank)
// case 0:
//     printf 国語
//     break