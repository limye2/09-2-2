//
//  main.c
//  09-2-2
//
//  Created by MacBook Air on 2023/11/05.
//

#include <stdio.h>
#define SIZE 5

int main(int argc, const char * argv[]) {
    int i, average;
    int sum;
    int grade[SIZE];
    
    sum = 0;
    for(i=0; i<SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = sum/SIZE;
    printf("성적 평균:%d\n", average);
    return 0;
}
