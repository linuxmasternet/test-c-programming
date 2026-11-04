/*
 * 파일명: ex-function00.c
 * 프로그램 설명: 함수 선언, 호출, 정의의 기본 구조
 */

#include <stdio.h>  // printf 함수의 선언이 포함된 헤더 파일

/* 함수 선언: 함수의 이름, 반환형, 매개변수 정보를 알린다. */
void function(void);

int main(void)
{
    printf("함수 호출 전\n");
    function();  // 함수 호출: function 함수를 실행한다.
    printf("함수 호출 후\n");
    return 0;
}

/* 함수 정의: 함수가 실행할 내용을 작성한다. */
void function(void)
{
    printf("function() 실행!\n");
}
