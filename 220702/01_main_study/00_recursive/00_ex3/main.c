#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* recursive with String */

char* create_result_name(char* name)
{
   FILE *fp = NULL;     //FILE 구조체를 가리키는 포인터 변수 fp

   char *temp = NULL;      //문자열을 가리키는 포인터 변수 temp
   temp = (char*)malloc(strlen(name) + 4);   //파일 이름 길이(strlen(name)) + 확장자(.txt) 길이(4) 만큼 메모리를 할당한 주소값 강제형변환 후 저장
   strcpy(temp, name);     //스트링 카피(대상, 복사할 원본) : temp에 name을 복사
   strcat(temp, ".txt");   //스트링 추가(대상, 추가할 문자열) : temp 뒤에 ".txt"를 추가

   fp = fopen(temp, "r");  //파일 열기(temp에 저장된 파일명 열기, 파일 열 시의 모드 선택) : 읽기 위한("r") 텍스트 파일(temp) 열기

   if(fp == NULL)          //파일 구조체 fp가 없는가??
   {
      return name;                        //없다면, 파일명 그대로 출력
   }
   else
   {
      strcat(name, "_1");                 //있다면, 파일 이름 뒤에 "_1" 추가
      return create_result_name(name);    //추가한 후의 이름을 가진 파일명 그대로 출력
   }
}

void main()
{
   char result[100] = "result";                    //검사할 중복 여부 파일명 할당 : "result"
   char* str_result = create_result_name(result);  //중복 여부 파일명으로 중복 여부 검사 후 파일명 생성 처리
   strcat(str_result, ".txt");                     //생성된 파일명 뒤에 ".txt" 추가
   printf("%s\n", str_result);                     //최종 처리된 파일명 출력
}