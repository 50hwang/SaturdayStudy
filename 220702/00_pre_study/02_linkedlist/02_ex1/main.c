#include <stdio.h>
#define INF 10000

/* 배열 기반의 리스트 */

int arr[INF];   //INF(=10000)만큼의 배열 메모리 공간 사전 확보
int count = 0;

//배열의 뒤쪽에 원소 추가
void addBack(int data) {    
    arr[count] = data;      //1. 원소를 추가한다.
    count++;                //2. 추가한 원소 다음 인덱스를 준비한다.
}

//배열의 앞쪽에 원소 추가
void addFirst(int data) {   
    for (int i = count; i >= 1; i--) { 
        arr[i] = arr[i - 1];            //1. 기존 원소들을 한 칸씩 뒤로 밀어낸다.
    }
    arr[0] = data;                      //2. 비어있는 맨 처음 원소에 추가시킨다.
    count++;                            //3. 추가한 원소 다음 인덱스를 준비한다.
}

//배열의 특정 위치 원소 삭제
void removeAt(int index) {
    for (int i = index; i < count - 1; i++) {
        arr[i] = arr[i + 1];                    //1. 기존 원소들을 한 칸씩 앞으로 당겨낸다.
    }
    count--;                                    //2. 삭제한 원소 이전 인덱스를 준비한다.
}

//배열 출력
void show() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}

//메인 함수
int main(void) {
    addFirst(4);
    addFirst(5);
    addFirst(1);
    addBack(7);
    addBack(6);
    addBack(8);
    removeAt(1);
    show();
    return 0;
}