/*
파일명: ex02-01-variable.c

변수란?
메모리공간에 붙여진 이름.
c 프로그램 사용되는 모든 값을 메모리 공간에 저장
메모리 고간에 이름을 붙여 접근 가능.

변수 선언 및 초기화
 자료형 변수명 = 값
 
*/

#include <stdio.h>

int main(void)
{
    int number1, number2; // 두개의 int형 변수르 한번에 선언
    
    number1 = 1;      //초기화
    number2 = 2;
    //선언과 동시에 초기화 (값 대입)
    int number3 = 3, number4 = 4;
    int number5 = 5;
/* ctrl + c (줄복사)*/
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    printf("%d\n", number4);
    printf("%d\n", number5);

    return 0;
}