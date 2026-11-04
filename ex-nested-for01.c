/*
 * 파일명: ex-nested-for01.c
 * 프로그램 설명: 중첩 for문
 */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
