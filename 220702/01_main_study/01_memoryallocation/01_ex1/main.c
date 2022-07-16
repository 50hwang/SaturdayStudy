#include <stdio.h>
#include <stdlib.h>

void main()
{
   //int test2[3];

   //int *test = test2;
   int *test;
   test = (int*)malloc(sizeof(int) * 3);

   int i = 0;
   for(i = 0; i < 3; i++)
   {
      test[i] = i;
   }

   for(i = 0; i < 3; i++)
   {
      printf("%d ", test[i]);
   }
   printf("\n");

   free(test);
}