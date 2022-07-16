#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {        //구조체 정의
    char name[20];               //데이터 정의
    //char *name;
    char phonenumber[11];
    unsigned int age;
} Student;                 //구조체명 정의

void main()
{
   Student *student1 = (Student*)malloc(sizeof(Student));
   memset(student1, 0 ,sizeof(Student));

   //student1->name = (char*)malloc(12);
   //memset(student1->name, 0, sizeof(char) * 12);
   strcat(student1->name, "Park kyu ho");
   student1->age = 43;

   Student *student2 = (Student*)malloc(sizeof(Student));
   memset(student2, 0, sizeof(Student));

   memcpy(student2, student1, sizeof(Student));

   free(student1->name);

   free(student1);

   printf("%s\n", student2->name);
   printf("%d\n", student2->age);

   
   free(student2);
}