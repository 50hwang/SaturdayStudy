#include <stdio.h>
#include <stdlib.h> //동적 할당을 위한 추가

/* 연결 리스트 구조체 만들기 */

typedef struct {        //구조체 정의
    int data;               //데이터 정의
    struct Node *next;      //다음 노드를 가리키는 변수 정의
} Node;                 //구조체명 정의

Node *head;

int main(void) {
    return 0;
}