#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 배열로 문자열 표현 및 문자 접근 */

int main(void) {

    /* 1. 문자의 배열로 문자열 선언 */

    char a[20] = "Hello World!!";   //배열 크기 20만큼 잡고, 쌍따옴표("") 안에 문자열 입력

    /* 2. 문자열에서 문자 접근 */

    a[4] = ',';         //4번째 문자(보편적을 5번째)를 콤마로 바꿈
    printf("%s\n\n", a);  //%s 타입으로 문자열 결과값 출력

    /* 3. 문자열에 포함된 특정 문자 갯수 파악 */

    char b[] = "Good morning!!";    //대괄호를 비워놓고, 초기값의 문자열 갯수만큼 알아서 크기 지정 가능
    int count = 0;                  //문자열 갯수 초기값 선언.
    for(int i = 0; i <= 10; i++) {      //반복문 시작 : 0번째에서부터 9번째까지 반복
        if (b[i] == 'o') {              //조건문 : 문자 배열 b 내에 o와 일치하는 원소가 있다면
            count++;                    //1개 더해라.
        }                               //조건문 끝.
    }                                   //반복문 끝.
    printf("%d\n", count);          //문자열 갯수 결과값 출력.
    return 0;
}