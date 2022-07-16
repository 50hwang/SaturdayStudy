#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
   char* test;

   test = (char*)malloc(5);

   test[0] = 't';
   test[1] = 'e';
   test[2] = 's';
   test[3] = 't';
   test[4] = '\000';

   strcat(test, "1");

   char* test2;

   //strcpy(test2, test);
   memcpy(test2, test, sizeof(char) * 2);

   printf("%s\n", test);
   printf("%s\n", test2);

   if(strcmp(test,test2))
   {
      printf("Different\n");
   }
   else
   {
      printf("Same\n");
   }
}